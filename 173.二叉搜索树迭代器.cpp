/*
 * @lc app=leetcode.cn id=173 lang=cpp
 *
 * [173] 二叉搜索树迭代器
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
class BSTIterator {
public:
    vector<int> ans;
    int i=0;
    BSTIterator(TreeNode* root) {
        stack<TreeNode*> stk;
        TreeNode *p=root;

        while(p||!stk.empty()){
            while(p){
                stk.push(p);
                p=p->left;
            }
            p=stk.top();
            stk.pop();
            ans.push_back(p->val);
            p=p->right;
        }
    }
    
    int next() {
        return ans[i++];
    }
    
    bool hasNext() {
        return i<ans.size();
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
// @lc code=end

