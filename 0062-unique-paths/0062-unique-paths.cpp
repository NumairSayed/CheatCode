constexpr inline size_t binom(size_t n, size_t k) noexcept {
    if (k > n) return 0;
    if (k == 0 || k == n) return 1;

    
    k = min(k, n - k);

    size_t result = 1;
    for (size_t i = 1; i <= k; ++i) {
        result = result * (n - i + 1) / i;
    }

    return result;
}
class Solution {
public:
    int uniquePaths(int m, int n) {
        
      return binom(n+m-2,m-1);
    }
};