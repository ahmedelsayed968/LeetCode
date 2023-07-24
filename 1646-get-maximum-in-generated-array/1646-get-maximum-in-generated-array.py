class Solution:
    def getMaximumGenerated(self, n: int) -> int:
        if n == 0 :
            return 0
        a  = [0 for _ in range(n+1)]
        a[0] = 0
        a[1] = 1
        mx = 1
        for i in range(1,n+1):
            if i*2 <= n:
                a[i*2] = a[i]
                mx = max(mx,a[i*2])
            else:
                break
            if i*2 +1 <=n:    
                a[i*2+1] = a[i] +a[i+1]
                mx = max(mx,a[i*2+1])
            else:
                break
        return mx     
        