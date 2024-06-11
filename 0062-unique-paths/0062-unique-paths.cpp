unsigned long long binomialCoefficient(int n, int k) {
    if (k > n) return 0;
    if (k == 0 || k == n) return 1;

    // C(n, k) is the same as C(n, n-k)
    if (k > n - k) k = n - k;

    unsigned long long res = 1;
    for (int i = 0; i < k; ++i) {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}

class Solution {
public:
    int uniquePaths(int m, int n) {
        
      return binomialCoefficient(n+m-2,m-1);
    }
};