int binarySearchFirstColumn(const vector<vector<int>>& matrix, int target) {
    int low = 0;
    int high = matrix.size() - 1;
    int mid;
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (matrix[mid][0] == target) {
            return mid;  // Return index of the row if target is found
        } else if (matrix[mid][0] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return mid;  
}

int binarySearch(const vector<int> &array, int x, int low, int high) {
  
	// Repeat until the pointers low and high meet each other
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

class Solution {
public:
   bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int row=0;
        int col= matrix[0].size() - 1;
        int totalRow = matrix.size();
        int index;
        while(row<totalRow && col>=0)
        {
            index = matrix[row][col];
            if(index==target) return 1;
            if(index>target)col--;
            else row++;
        }
        return 0;
    }
};