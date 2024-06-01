class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascals_triangle;
        pascals_triangle.push_back({1});
        if (numRows ==1)
        {
           return pascals_triangle;
        }
        
        for(int i=1;i<numRows;i++)
        {
            vector<int> tempvect;
            for(int j=0;j<=i;j++)
            {
                if(!j || j==i)
                {
                    tempvect.push_back(1);
                }
                else
                {
                    tempvect.push_back(pascals_triangle[i-1][j-1] + pascals_triangle[i-1][j] );
                                           
                }
            }
            pascals_triangle.push_back(tempvect);
        }
        
        
        return pascals_triangle;
    }
};