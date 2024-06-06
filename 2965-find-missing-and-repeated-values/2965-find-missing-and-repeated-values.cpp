class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        
        int sum =0;
    int n = pow(grid.size(),2);
    for(auto &it: grid)
    {
        for(auto &bit: it)
        {
            sum+=bit;
        }
    }
    long actualSum =n*(n+1)/2; 
    int diff = sum - actualSum;
    
    long long sumOfSquares=0;
    for(auto &it: grid)
    {
        for(auto &bit: it)
        {
            sumOfSquares+=pow(bit,2);
        }
    }
    
    long squarediff = sumOfSquares - actualSum*(2*n+1)/3;
    int aplusb = squarediff/diff;
    int a = (diff+aplusb)/2;
    int b = aplusb - a;
    vector<int> output;
    output.push_back(a);
    output.push_back(b);
    return output;
    }
};