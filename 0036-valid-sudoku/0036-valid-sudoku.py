class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        self.borad = board
        flag = True
        flag = self.check_rows()
        if not flag:
            return False
        flag = self.check_cols()
        if not flag:
            return False
        
        return self.check_sub_matrix()
    
    def check_sub_matrix(self):
        
        for i in range(0,7,3):
            for j in range(0,7,3):
                sub = [self.borad[k][j:j+3] for k in range(i,i+3)]
                if not self.check_sub(sub):
                    return False
        return True
    
    def check_sub(self,sub):
        freq  = [0]*10
        for i in range(3):
            for j in range(3):
                if sub[i][j] != '.':
                    if freq[int(sub[i][j])] >= 1:
                        return False
                    else:
                        freq[int(sub[i][j])] += 1
        return True
    
    def check_cols(self):
        rows = 9
        cols = 9
        for i in range(rows):
            freq = [0]*10
            for j in range(cols):
                if self.borad[j][i] !='.':
                    if freq[int(self.borad[j][i])] >= 1:
                        return False
                    else:
                        freq[int(self.borad[j][i])] += 1
        return True
    
                        
    def check_rows(self):
        rows = 9
        cols = 9
        for i in range(rows):
            freq = [0]*10
            for j in range(cols):
                if self.borad[i][j] !='.':
                    if freq[int(self.borad[i][j])] >= 1:
                        return False
                    else:
                        freq[int(self.borad[i][j])] += 1
        return True