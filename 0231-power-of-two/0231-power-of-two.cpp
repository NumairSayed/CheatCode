class Solution {
public:
    bool isPowerOfTwo(int n) {
        long long num = n;
        if(!num) return false;
        if(num & (num-1)) return false;
           return true;
    }
};