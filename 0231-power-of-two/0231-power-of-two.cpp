class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0 || (((n%2))&&n>1)) return false;
        else if (n==1) return true;
        else if(!(n%2)) return isPowerOfTwo(n/2);
        return false;
    }
};