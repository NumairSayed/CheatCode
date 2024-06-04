class Solution {
public:
    bool isPowerOfTwo(int n) {
        long long num = n;
        
        if(num & (num-1) || !num) return false;
           return true;
    }
};