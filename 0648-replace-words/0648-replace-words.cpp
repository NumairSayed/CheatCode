string isPrefix(const string& a, const string& b) {
    // Check if `a` is a prefix of `b`
    for (size_t i = 0; i < a.length(); ++i) {
        if (a[i] != b[i]) {
            return "";
        }
    }
    return a;
}

bool compareByLength(const string& a, const string& b) {
    return a.length() < b.length();
}

class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        vector<string> sent_list;
        string temp;
        string output;
        sort(dictionary.begin(), dictionary.end(), compareByLength);
        for (auto& letters : sentence) {
            if (letters != ' ') {
                temp += letters;
            } else {
                sent_list.push_back(temp);
                temp.clear();
            }
        }

        sent_list.push_back(temp);

        for (auto& it : sent_list) {
            bool flag = false;
            string temp1;

            for (auto& bit : dictionary) {
                if (it.length() < bit.length()) {
                    continue;
                }

                temp1 = isPrefix(bit, it);
                if (!temp1.empty()) {
                    flag = true;
                    break;
                }
            }

            if (flag) {
                output += (output.empty() ? "" : " ") + temp1;
            } else {
                output += (output.empty() ? "" : " ") + it;
            }
        }

        return output;
    }
};