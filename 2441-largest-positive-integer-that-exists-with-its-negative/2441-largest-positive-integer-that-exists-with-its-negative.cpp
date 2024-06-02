class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_map<int,int> myMap;
        int n = sizeof(nums) / sizeof(nums[0]);
        vector<int>vec = nums;
        
        sort(vec.begin(), vec.end());
        for(auto &it : vec)
        {
            myMap[it] = it;
            cout<< myMap[it]<<endl;
        }
        for( auto &it : vec)
        {
            if(myMap[-it]+it == 0 )
                return abs(it);
        }
        return -1;
        
    }
};