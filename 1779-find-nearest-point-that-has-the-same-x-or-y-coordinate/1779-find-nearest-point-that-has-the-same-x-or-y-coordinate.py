class Solution:
    def nearestValidPoint(self, x: int, y: int, points: List[List[int]]) -> int:
        ind = 0
        opera = 1e9
        for index,list_ in enumerate(points):
            x_dash,y_dash = list_[0],list_[1]
            if(x_dash == x or y_dash==y):
                cal = abs(x-x_dash) + abs(y-y_dash)
                if(cal < opera):
                    opera = cal
                    ind = index
        return -1 if opera == 1e9 else ind 
        