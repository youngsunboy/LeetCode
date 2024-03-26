/*
 * @lc app=leetcode.cn id=94 lang=cpp
 *
 * [94] 二叉树的中序遍历
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

//Morris遍历
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        if(root==nullptr){
            return res;
        }
        TreeNode *cur=root;
        TreeNode *mostRight=nullptr;
        while(cur!=nullptr){
            mostRight=cur->left;
            if(mostRight!=nullptr){
                while(mostRight->right!=nullptr&&mostRight->right!=cur){
                    mostRight=mostRight->right;
                }
                if(mostRight->right==nullptr){
                    mostRight->right=cur;
                    cur=cur->left;
                }else{
                    res.push_back(cur->val);
                    mostRight->right=nullptr;
                    cur=cur->right;
                }
            }else{
                res.push_back(cur->val);
                cur=cur->right;
            }
        }
        return res;
    }
};
// @lc code=end

