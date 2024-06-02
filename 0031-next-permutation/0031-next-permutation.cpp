/* int smallestElementIndex(vector<int>& arr, int start, int target) {
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
}  */

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
        int nearestSmallest = 0;
        
        /* Ideally You should be calling a function 
           that would find the smallest element greater 
           than that on targetIndex and return the index 
           on which that element resides to further swap it, 
           but it teurns out, in this problem, 
           if you look for element greater than that 
           on target index, from the right end, 
           the first element that you find, turns out to be the one. 
           Since array is decreasing order sorted if you disregrad 
           the (to be swapped element) */
        
        for(int i=len-1;i>targetIndex;i--)
        {
            if(nums[i]>nums[targetIndex]) {nearestSmallest = i; break;}
        }
        
      //  smallestElementIndex(nums, targetIndex + 1, nums[targetIndex]);

        swap(nums[targetIndex], nums[nearestSmallest]);

        reverse(nums.begin() + targetIndex + 1, nums.end());
    }
};
// 7 3 6 5 4 2 1
// 7 3 6 5 4 '2 1' // is 12>21 ? No
// 7 3 6 5 '4 2 1' // is there a perm of 421 > 421? No 
// 7 3 6 '5 4 2 1' // is there a perm of 5421 > 5421? No
// 7 3 '6 5 4 2 1' // is there a perm of 65421 > 65421? No
// 7 '3 6 5 4 2 1' // is there a perm of 365421 > 365421 ? Yes 
// Now find the smallest element just greater than 3 in the right part of the array and swap it with 3
// 7 4 6 5 3 2 1 
// 7 4 '6 5 3 2 1' and reverse the selected part for the smallest
// 7 4 1 2 3 5 6.


