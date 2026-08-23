class Solution:
    def factorial(self, n: int) -> int:
        fact=1
        for i in range(1,n+1):
            fact=fact*i
            i=i+1
        return fact
            
        