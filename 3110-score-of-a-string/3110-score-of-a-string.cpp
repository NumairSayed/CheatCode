class Solution {
public:
    int scoreOfString(string s) {
        int sum =0;
        int len = s.length();
        if(len == 1) return s[0];
        for(int i=1;i<len;i++)
        {
            sum+= abs(s[i-1] - s[i]);
        }
        return sum;
    }   
};