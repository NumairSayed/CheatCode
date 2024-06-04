class Solution {
public:
    int appendCharacters(string s, string t) {

        int len_s = s.length();
        int len_t = t.length();
        int s1 = 0;
        int s2 = 0;

        while (s1 != len_s) {
            if (s[s1] == t[s2]) {
                if (s2 <= len_t - 1)
                    ++s2;
            }

            ++s1;
        }
        return len_t - s2;
    }
};