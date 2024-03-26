/*
 * @lc app=leetcode.cn id=645 lang=cpp
 *
 * [645] 错误的集合
 */

// @lc code=start
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> hash(nums.size()+1);
        vector<int> res;
        for(auto &i:nums){
            hash[i]++;
        }
        for(int i=1;i<=nums.size();i++){
            if(hash[i]==2){
                res.push_back(i);
                hash[i]=1;
                break;
            }
        }
        for(int i=1;i<=nums.size();i++){
            if(hash[i]==0){
                res.push_back(i);
                break;
            }
        }
        return res;
    }
};
// @lc code=end

