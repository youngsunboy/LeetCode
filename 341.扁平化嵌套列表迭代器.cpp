/*
 * @lc app=leetcode.cn id=341 lang=cpp
 *
 * [341] 扁平化嵌套列表迭代器
 */

// @lc code=start
/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds, if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Return the nested list that this NestedInteger holds, if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 */

class NestedIterator {
private:
    vector<int> res;
    vector<int>::iterator cur;
    void dfs(vector<NestedInteger> &nestedList){
        for(auto &i:nestedList){
            if(i.isInteger()){
                res.push_back(i.getInteger());
            }else{
                dfs(i.getList());
            }
        }
    }

public:
    NestedIterator(vector<NestedInteger> &nestedList) {
        dfs(nestedList);
        cur=res.begin();
    }
    
    int next() {
        return *cur++;
    }
    
    bool hasNext(){
        return cur!=res.end();
    }
};

/**
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 */
// @lc code=end

