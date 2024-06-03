Next Permutation Intuition​:

First let us understand what is lexicographic enumeration or more commonly dictionary ordering.

For any set (with unique elements for simplicity, it is to know that this problem covers multisets as well) with n elements in it,
there are n! permutations for the same. But how does one precedes/exceed the other? on what basis do we find an ordering and compare within permutations?



![Cascaded Sets without Numbers in Between](https://github.com/SlimShadybrvh/CheatCode/assets/107948730/dcb607c4-34f0-475a-86c1-f56a64151495)

For a given set [a,c,u,w,x,y,z] we consider these characters to be [1,2,3,4,5,6,7] respectively. First, convince yourself that 
[1,2,3,4,5,6,7] is in fact the smallest permutation. Why? As you can see in the diagram, if you map the numbers with place values, keeping the greatest number 7 at ones place and keeping the smallest number 1 at 10^6 th place and all the numbers in their best smallest position actually induces the smallest number, therefore it is actually 1x10^6 + 2x10^5 + 3x10^4 + 4x10^3 + 5x10^2 + 6x10^1 + 7x10^0 = 1,234,567. Which is the smallest value which can be obtained from this set of numbers.
And intuitively [7,6,5,4,3,2,1] will be the greatest.

This is where we build our intuition from and start finding next permutation for a given permutation.

Suppose the given permutation is [7,3,6,5,4,2,1].

// 7 3 6 5 4 2 1

// 7 3 6 5 4 '2 1' // is 12>21 ? No

// 7 3 6 5 '4 2 1' // is there a perm of 421 > 421? No 

// 7 3 6 '5 4 2 1' // is there a perm of 5421 > 5421? No

// 7 3 '6 5 4 2 1' // is there a perm of 65421 > 65421? No

// 7 '3 6 5 4 2 1' // is there a perm of 365421 > 365421 ? Yes 

// Now find the smallest element just greater than 3 in the right part of the array and swap it with 3

Why is this step important?

You do this, because you dont have to find any permutation that is greater than our number but the one that is just greater than this. And if you replace the nearest greatest integer your solution moves towards the next greater permutation.

// 7 4 6 5 3 2 1 -- Swapped.

// 7 4 '6 5 3 2 1' and reverse the selected part for the smallest permutation.

As you can see the quoted part of string is in strictly non-increasing order this means it is contributing 
6x10^4 + 5x10^3 + 3x10^2 + 2x10^1 + 1x10^0 o our number which is not ideal. We would like it to be the other way around where the biggest number had the smallest weight and the smallest number to have the biggest weight. Thereby asking us to reverse the string for the same effect.

// 7 4 1 2 3 5 6. Now this is the next permutation for the input integer set. 

NOTE: The diagram shows characters to understand the solution in case of character inputs as well where you can either map them to their ASCII values or any numbers from natural numbers set. Also for you to try and think how dictionary words are ordered.
