

int maxLengthSubarray(std::vector<int>& nums, int k) {
    int n = nums.size();
    int maxLength = 0;
    int currentSum = 0;
    int start = 0;

    for (int end = 0; end < n; ++end) {
        currentSum += nums[end];

        while (currentSum > k && start <= end) {
            currentSum -= nums[start];
            ++start;
        }

        if (currentSum <= k) {
            maxLength = std::max(maxLength, end - start + 1);
        }
    }

    return maxLength;
}

class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        vector<int> indexwisecost;
        int len = t.length();

        for (int i = 0; i < len; i++) {
            indexwisecost.push_back(abs(int(s[i] - t[i])));
        }
        return maxLengthSubarray(indexwisecost, maxCost);
    }
};