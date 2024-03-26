#
# @lc app=leetcode.cn id=9 lang=python3
#
# [9] 回文数
#

# @lc code=start
class Solution:
    def isPalindrome(self, x: int) -> bool:
        # x=str(x)
        # x_reverse=x[::-1]
        # return x==x_reverse
        return x>=0 and str(x)==str(x)[::-1]
# @lc code=end

