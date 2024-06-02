void swap(char &a, char &b)
{
    char temp;
    temp = b;
    b = a;
    a = temp;
    return;
}

class Solution {
public:
    void reverseString(vector<char>& s) {
        int size = s.size();
        for(int i =0;i <size/2;i++)
          swap(s[i],s[size-1-i]);
        return;
    }
};