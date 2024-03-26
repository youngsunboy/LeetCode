#
# @lc app=leetcode.cn id=496 lang=python3
#
# [496] 下一个更大元素 I
#

# @lc code=start
#自己写的屎山循环
#class Solution:
#    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
#        s=[]
#        for i in range(len(nums1)):
#            for j in range(len(nums2)):
#                if nums1[i]==nums2[j]:
#                    k=j+1
#                    while k<len(nums2) and nums2[k]<=nums1[i]:
#                        k=k+1
#                    if k==len(nums2):
#                        s.append(-1)
#                    else:
#                        s.append(nums2[k])
#        return s

#力扣官方题解
class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
        m,n=len(nums1),len(nums2)
        res=[0]*m
        for i in range(m):
            j=nums2.index(nums1[i])
            k=j+1
            while k<n and nums2[k]<nums2[j]:
                k=k+1
            res[i]=nums2[k] if k<n else -1
        return res

# @lc code=end

