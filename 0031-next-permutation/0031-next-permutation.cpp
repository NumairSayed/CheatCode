int smallestElementIndex(vector<int>& arr, int start, int target) {
    int index = start;
    for (int i = start; i < arr.size(); i++) {
        if (arr[i] > target && arr[i] <= arr[index]) {
            index = i;
        }
    }
    return index;
}

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int len = nums.size();
        
        int targetIndex = -1;

        for (int i = len - 1; i > 0; i--) {
            if (nums[i - 1] < nums[i]) {
                targetIndex = i - 1;
                break;
            }
        }

        if (targetIndex < 0) {
            reverse(nums.begin(),nums.end());
            return;
        }

        int nearestSmallest =
            smallestElementIndex(nums, targetIndex + 1, nums[targetIndex]);

        swap(nums[targetIndex], nums[nearestSmallest]);

        reverse(nums.begin() + targetIndex + 1, nums.end());
    }
};
// 7 3 6 5 4 2 1
// 7 3 6 5 4 '2 1' // is 12>21 ? No
// 7 3 6 5 '4 2 1' // is there a perm of 421 > 421? No 
// 7 4 6 5 3 2 1 
// 

