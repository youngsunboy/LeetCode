#
# @lc app=leetcode.cn id=3 lang=python3
#
# [3] 无重复字符的最长子串
#

# @lc code=start
class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        start=-1
        extreme=0
        dict={}
        for i in range(len(s)):
            if s[i] in dict and dict[s[i]]>start:
                start=dict[s[i]]
                dict[s[i]]=i
            else:
                dict[s[i]]=i
                if i-start>extreme:
                    extreme=i-start
        return extreme
# @lc code=end

