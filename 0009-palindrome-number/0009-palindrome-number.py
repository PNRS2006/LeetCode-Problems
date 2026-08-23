class Solution:
    def isPalindrome(self, x: int) -> bool:
        i=0
        xt = str(x)
        j=len(xt)-1
        for i in range(len(xt)//2):
            if (xt[i]!=xt[j]): return False
            j -= 1

        return True