/*
 * @lc app=leetcode.cn id=1128 lang=cpp
 *
 * [1128] 等价多米诺骨牌对的数量
 */

// @lc code=start
class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int count=0;
        vector<int> num(100);
        for(vector<int> &it:dominoes){
            int val=it[0]>it[1]?it[0]*10+it[1]:it[1]*10+it[0];
            count+=num[val];
            num[val]++;
        }
        return count;
    }
};
// @lc code=end

