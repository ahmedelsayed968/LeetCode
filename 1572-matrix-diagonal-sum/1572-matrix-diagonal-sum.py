class Solution:
    def diagonalSum(self, mat: List[List[int]]) -> int:
        n = len(mat)
        s = 0
        for i in range(n):
            for j in range(n):
                if i==j:
                    s += mat[i][j]
                elif i+j == n-1:
                    s += mat[i][j]
        return s            
        