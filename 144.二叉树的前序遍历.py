#
# @lc app=leetcode.cn id=144 lang=python3
#
# [144] 二叉树的前序遍历
#

# @lc code=start
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def preorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        #需要返回的列表
        l=[]

        if not root:
            return l

        #所用到的栈
        stk=[]

        node=root

        while node or stk:
            while node:
                l.append(node.val)
                stk.append(node)
                node=node.left
            node=stk.pop()
            node=node.right
        return l
# @lc code=end

