#
# @lc app=leetcode.cn id=66 lang=python3
#
# [66] 加一
#

# @lc code=start
class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        digits[-1]+=1
        digits=digits[::-1]
        carry=0
        for i in digits:
            if i>=10:
                i=(i+carry)%10
                carry=i//10
        if digits[0]==10:
            digits[0]=0
            digits.insert(0,1)
        return digits[::-1]
# @lc code=end

