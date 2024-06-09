class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority = nums[0];
        int majorityFreq = 0;
        if (nums.size() == 1)
            return nums[0];
        for (auto& it : nums) {
            if (it == majority)
                majorityFreq++;
            else if (majorityFreq >= 0 && it != majority)
                majorityFreq--;
            if (majorityFreq < 0) {
                majorityFreq = 0;
                majority = it;
                majorityFreq++;
                continue;
            }
        }

        return majority;
    }
};