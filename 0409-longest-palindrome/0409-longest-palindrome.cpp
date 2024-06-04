class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> charMap;
        
    for(auto &it : s)
    {
        charMap[it]++;
    }
    int len = 0;
    for (auto &it : charMap)
    {
        if(!(it.second %2)) {len+=it.second; it.second=0;}
        else if((it.second%2)&& (it.second!=1)) {len+=it.second -1; it.second = 1;}
        
    }
        for(auto &it : charMap)
        {
            if(it.second == 1) {len+=1; break;}
        }
        return len;
        
        
        
    }
};