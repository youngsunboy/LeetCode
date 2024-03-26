/*
 * @lc app=leetcode.cn id=1122 lang=cpp
 *
 * [1122] 数组的相对排序
 */

// @lc code=start
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int m=*max_element(arr1.begin(),arr1.end());
        vector<int> hash(m+1);
        vector<int> res;
        for(auto &i:arr1){
            hash[i]++;
        }
        for(auto &i:arr2){
            while(hash[i]--){
                res.push_back(i);
            }
            hash[i]=0;
        }
        for(int i=0;i<=m;i++){
            for(int j=0;j<hash[i];j++){
                res.push_back(i);
            }
        }
        return res;
    }
};
// @lc code=end

