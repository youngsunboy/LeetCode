#
# @lc app=leetcode.cn id=2 lang=python3
#
# [2] 两数相加
#

# @lc code=start
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        res=ListNode()
        cur=res
        sum=0
        while l1 or l2 or sum:
            sum+=(l1.val if l1 else 0)+(l2.val if l2 else 0)
            l1=l1.next if l1 else None
            l2=l2.next if l2 else None
            cur.next=ListNode(sum%10)
            cur=cur.next
            sum//=10
        return res.next
# @lc code=end

