class Solution {
public:
    int specialArray(vector<int>& nums) {

        int n = nums.size();
        int min = nums[0];
        int min_index = 0;
        int max = nums[0];
        int max_index = 0;
        if (n == 0) {
            cerr << "underflow" << endl;
            return -1;
        }

        for (int i = 0; i < n; i++) {
            if (nums[i] >= nums[max_index]) {
                max_index = i;

            } else if (nums[i] < nums[min_index]) {
                min_index = i;
            }
        }
        max = nums[max_index];
        min = nums[min_index];
        vector<int> helper(max + 1);
        for (int i = 0; i < n; i++) {
            helper[nums[i]]++;
        }
        for (int i = max - 1; i >= 0; i--) {
            helper[i] += helper[i + 1];
        }
        for (int i = 0; i <= max; i++) {
            if (helper[i] == i)
                return i;
        }
        return -1;
    }
};