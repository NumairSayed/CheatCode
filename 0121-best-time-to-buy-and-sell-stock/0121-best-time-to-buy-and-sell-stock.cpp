class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
    
    int diff=0;
    int i=0;
        int j=1;
    int maxDiff = 0;
        
    while(j<prices.size())
    {   
        diff = prices[j]-prices[i];
        if(diff<=0) i=j;
        maxDiff = max(maxDiff,diff);
        j++;
    }
    
        return maxDiff;
        
        
    }
};