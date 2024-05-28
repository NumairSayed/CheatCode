class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        int i;
        int len = size(words);
        for (i = 0; i < len; i++) {
            string str = words[i];
            reverse(str.begin(), str.end());
            if (str == words[i]) 
            return words[i];
                                   }
                                  return"";
        
    }
};