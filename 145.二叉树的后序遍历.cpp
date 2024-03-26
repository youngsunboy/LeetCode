/*
 * @lc app=leetcode.cn id=145 lang=cpp
 *
 * [145] 二叉树的后序遍历
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
    void addPath(vector<int> &vec,TreeNode *node){
        int count=0;
        while(node!=NULL){
            count++;
            vec.push_back(node->val);
            node=node->right;
        }
        reverse(vec.end()-count,vec.end());
    }

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;
        if(root==NULL){
            return res;
        }
        TreeNode *cur=root;
        TreeNode *mostRight=NULL;
        while(cur!=NULL){
            mostRight=cur->left;
            if(mostRight!=NULL){
                while(mostRight->right!=NULL&&mostRight->right!=cur){
                    mostRight=mostRight->right;
                }
                if(mostRight->right==NULL){
                    mostRight->right=cur;
                    cur=cur->left;
                    continue;
                }else{
                    mostRight->right=NULL;
                    addPath(res,cur->left);
                }
            }
            cur=cur->right;
        }
        addPath(res,root);
        return res;
    }
};

// @lc code=end

