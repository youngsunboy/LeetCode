/*
 * @lc app=leetcode.cn id=682 lang=cpp
 *
 * [682] 棒球比赛
 */

// @lc code=start
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> res;
        for(auto &i:operations){
            if(i[0]=='+'){
                int a=res.back();
                res.pop_back();
                int b=a+res.back();
                res.push_back(a);
                res.push_back(b);
            }else if(i[0]=='D'){
                res.push_back(res.back()*2);
            }else if(i[0]=='C'){
                res.pop_back();
            }else{
                res.push_back(stoi(i));
            }
        }
        return accumulate(res.begin(),res.end(),0);
    }
};
// @lc code=end

