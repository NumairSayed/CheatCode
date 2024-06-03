class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map<int, int> freq;

        // [000001111222]
        // freq<key,value>

        // int a,b,c;
        // key,value
        for (auto& it : nums) {
            freq[it]++;
        }
        // freq<0,5>
        // freq<1,4>
        // freq<2,3>

        for (int i = 0; i < freq[0]; i++) {
            nums[i] = 0;
        }
        for (int i = freq[0]; i < freq[0] + freq[1]; i++) {

            nums[i] = 1;
        }

        for (int i = freq[0] + freq[1]; i < freq[0] + freq[1] + freq[2]; i++) {
            nums[i] = 2;
        }
        return;
    }
};