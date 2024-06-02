​Explanation:

![image](https://github.com/SlimShadybrvh/CheatCode/assets/107948730/57154c1e-0239-4c8f-9380-9f9d7234c751)

Brute Force:
Let this be the array you're working with. Call the vertical array to be of bool type named "row" and the horizontal one to be "cols". You must traverse the input matrix and for any entry Aij==0 (where this entry corresponds to ith row and jth column), update row[i] = true and cols[j] = true.

When the imput matrix is traversed, your row and cols matrix have true entries at all indices which needs to be zeroed.
You can now traverse over your row and cols matrix and make your entries 0.
You were able to do this in O(m+n) space only because it doesnt mater how many 0 entries there are in 1 single row (or in 1 single column for that matter), the whole row will have to be turned to 0, this is the thought that eliminates the possibility of having an mxn auxiliary matrix to help store the indices.


Optimal:
Notice that without loss of generality, we can use 1 single row and 1 single column of our input matrix, to store the information that we were trying to store in our auxiliary matrices of size n and m respectively.
Just by doing this 1 single trick we can use 0th row and 0th column of our input matrix to store this information.

First let us understand what problem does this approach gives:

  If we were to store the information in 0th row and 0th column of our input matrix and that originally 0th row and 0th column had no 0 entries then after traversing through the remaining matrix during the time we will overwrite elements to be 0, we will make all entries in 0th row and 0th column to be 0 just because some values in these one dimensional vectors were overwritten.

To take care of this, we will initialize 2 boolean variables named zeroeth_rowstatus and zeroeth_colstatus, we will traverse through the 0th row and 0th column to know if in the end these 2 one dimensional vectors that we borrowed from input vector on lease, needs to be updated to 0 or not.

This way we can solve this problem in O(1) space.

