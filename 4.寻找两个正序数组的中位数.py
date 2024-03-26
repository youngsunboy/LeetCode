#
# @lc app=leetcode.cn id=4 lang=python3
#
# [4] 寻找两个正序数组的中位数
#

# @lc code=start
class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        n=sorted(nums1+nums2)
        if len(n)%2==0:
            return (n[(len(n)-1)/2]+n[len(n)/2])/2
        else:
            return (float)(n[len(n)])
# @lc code=end

