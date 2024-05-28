class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0 || (((n%2))&&n>1)) return 0;
        else if (n==1) return 1;
        else if(!(n%2)) return isPowerOfTwo(n/2);
        return 0;
    }
};