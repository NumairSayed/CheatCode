

char complement(char input) { return input == '0' ? '1' : '0'; }

class Solution {
public:
    int numSteps(string s) {
        stack<char> buffer;
        queue<char> tempbuffer;

        for (auto& bit : s) {
            buffer.push(bit);
        }

        int counter = 0;
        while (buffer.size() > 1) {
            if (buffer.top() == '0') {

                buffer.pop();
            } else {

                while (!buffer.empty() && buffer.top() != '0') {
                    tempbuffer.push(complement(buffer.top()));
                    buffer.pop();
                }
                if (!buffer.empty()) {
                    buffer.pop();
                    buffer.push('1');
                } else {
                    buffer.push('1');
                }

                while (!tempbuffer.empty()) {
                    buffer.push(tempbuffer.front());
                    tempbuffer.pop();
                }
            }
            counter++;
        }
        return counter;
    }
};
