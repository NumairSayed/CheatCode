import scipy as sc
class Solution:
    def uniquePaths(self, m: int, n: int) -> int:
        return int(sc.special.comb(m+n-2,min(m,n)-1))
    
    