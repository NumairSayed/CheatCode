class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(!m) {nums1=nums2;return;}
        if(!n) return;
       // if(!m && n) {swap(nums1[0],nums2[0]); return;}
        int i=m-1;int j=n-1; int k =m+n-1;
        while(i>=0 && j>=0)
        {
            if(nums1[i]>nums2[j])
            {
                nums1[k]=nums1[i]; k--;i--;
            }
            else
            {
                nums1[k]=nums2[j]; j--;k--;
            }
        }
        
        if(i>=0 && j<0) return;
        if(j>=0 && i<0) 
        {
            while(j>=0)
            {
                nums1[k]=nums2[j];j--;k--;
            }
        }
        if(j>=0 && i>=0)
        {
            while(j>=0)
        {
            if(nums1[i]>nums2[j])
            {
                nums1[k]=nums1[i]; k--;i--;
            }
            else
            {
                nums1[k]=nums2[j]; j--;k--;
            }
        }
        }
        
        
        
        
        return;
    }
};