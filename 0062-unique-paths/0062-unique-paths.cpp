constexpr inline size_t binom(size_t n, size_t k) noexcept
{
    return
      (        k> n  )? 0 :          // out of range
      (k==0 || k==n  )? 1 :          // edge
      (k==1 || k==n-1)? n :          // first
      binom(n - 1, k - 1) * n / k;   // recursive
}

class Solution {
public:
    int uniquePaths(int m, int n) {
        
      return binom(n+m-2,m-1);
    }
};