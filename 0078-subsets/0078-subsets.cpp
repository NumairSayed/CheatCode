class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int size = nums.size();
        vector<vector<int>> output;
        int subsetsize = pow(2, size); 

        for (int i = 0; i < subsetsize; i++) {
            vector<int> tempvect;
            bitset<10> b(i); 
            string binary = b.to_string(); // Convert to binary string
            string bin = binary.substr(10 - size, size); //sliceeeeeeeeeeee ice & spicee

            for (int j = 0; j < size; j++) {
                if (bin[j] == '1') {
                    tempvect.push_back(nums[j]); // if bit is true include in subset
                }
            }

            output.push_back(tempvect); 
        }

        return output; 
    }
};