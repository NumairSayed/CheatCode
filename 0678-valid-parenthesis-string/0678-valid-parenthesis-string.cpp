
class Solution {
public:
    bool checkValidString(string s) {
        pair<char, int> tuple;
        char v1;
        int v2;
        stack<pair<char, int>> paraStack;
        stack<pair<char, int>> starStack;
        for (int i = 0; i < s.length(); i++) {
            if (int(s[i]) == 42) {
                v1 = s[i];
                v2 = i;
                tuple.first = v1;
                tuple.second = v2;
                starStack.push(tuple);
                continue;
            }

            if (int(s[i]) == 40) {
                v1 = s[i];
                v2 = i;
                tuple.first = v1;
                tuple.second = v2;
                paraStack.push(tuple);
                continue;
            }
            if (int(s[i]) == 41) {
                if (!paraStack.empty())
                    paraStack.pop();

                else if (paraStack.empty() && !starStack.empty())
                    starStack.pop();

                else if (paraStack.empty() && starStack.empty())
                    return false;
            }
        }

        if (!paraStack.empty() && starStack.empty())
            return false;

        if (paraStack.empty())
            return true;

        while (!paraStack.empty() && !starStack.empty()) {
            if ((paraStack.top().second) < (starStack.top().second)) {
                paraStack.pop();
                starStack.pop();
                continue;
            } else if ((paraStack.top().second) > (starStack.top().second)) {
                return false;
            }
        }

        if(paraStack.empty())
        return true;
        else return false;
    }
};