class Solution:
    def __backtrack(self,row:int,size:int,col:set,pos:set,neg:set,board:List[str],result:List[List[str]]):
        if row >=size:
            board_copy = ["".join(row) for row in board]
            result.append(board_copy)
            return;
        else:
            for c in range(size):
                if c in col or (c+row) in pos or (row-c) in neg:
                    continue
                col.add(c)
                pos.add(c+row)
                neg.add(row-c)
                board[row][c] = 'Q'
                self.__backtrack(row+1,size,col,pos,neg,board,result)
                col.remove(c)
                pos.remove(c+row)
                neg.remove(row-c)
                board[row][c] = '.'

                
                
                
        
    def solveNQueens(self, n: int) -> List[List[str]]:
        pos = set()
        neg = set()
        col = set()
        
        board = [["."]*n for i in range(n)]
        result = []
        self.__backtrack(0,n,col,pos,neg,board,result)
        return result
        