#include <algorithm>
class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_map<int,int> myMap;
         sort(nums.begin(), nums.end());
         for(auto &it : nums)
        {
            myMap[it] = it;
            cout<< myMap[it]<<endl;
        }
        for( auto &it : nums)
        {
            if(myMap[-it]+it == 0 )
                return abs(it);
        }
        return -1;
        
    }
};