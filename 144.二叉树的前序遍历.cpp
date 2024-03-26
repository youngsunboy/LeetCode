/*
 * @lc app=leetcode.cn id=144 lang=cpp
 *
 * [144] 二叉树的前序遍历
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
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
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
                    res.push_back(cur->val);
                    cur=cur->left;
                    continue;
                }else{
                    //mostRight->right==cur
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


