/*
 * @lc app=leetcode.cn id=1078 lang=cpp
 *
 * [1078] Bigram 分词
 */

// @lc code=start
class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        auto split=[](const string &text,char delim)->vector<string>{
            vector<string> ans;
            string cur;
            for(char ch:text){
                if(ch==delim){
                    ans.push_back(move(cur));
                    cur.clear();
                }else{
                    cur=cur+ch;
                }
            }
            ans.push_back(move(cur));
            return ans;
        };

        vector<string> names=split(text,' ');
        vector<string> ans;
        for(int i=0;i<names.size()-1;i++){
            if(i+2<names.size()){
                if(names[i]==first&&names[i+1]==second){
                    ans.push_back(names[i+2]);
                }
            }
        }
        return ans;
    }
};
// @lc code=end

