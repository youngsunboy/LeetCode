/*
 * @lc app=leetcode.cn id=71 lang=cpp
 *
 * [71] 简化路径
 */

// @lc code=start
//class Solution {
//public:
//    string simplifyPath(string path) {
//        auto split=[](const string &s,char delim)->vector<string>{
//            vector<string> ans;
//            string cur;
//            for(char ch:s){
//                if(ch==delim){
//                    ans.push_back(move(cur));
//                    cur.clear();
//                }else{
//                    cur+=ch;
//                }
//            }
//            ans.push_back(move(cur));
//            return ans;
//        };
//
//        vector<string> names=split(path,'/');
//        vector<string> stack;
//        for(string &str:names){
//            if(str==".."){
//                if(!stack.empty()){
//                    stack.pop_back();
//                }
//            }else if(!str.empty()&&str!="."){
//                stack.push_back(move(str));
//            }
//        }
//
//        string ans;
//        if(stack.empty()){
//            ans="/";
//        }else{
//            for(string &i:stack){
//                ans+="/"+move(i);
//            }
//        }
//        return ans;
//    }
//};

//class Solution {
//public:
//    string simplifyPath(string path) {
//        auto split=[](const string &s,char delim)->vector<string>{
//            vector<string> ans;
//            string cur;
//            for(char ch:s){
//                if(ch==delim){
//                    ans.push_back(move(cur));
//                    cur.clear();
//                }else{
//                    cur=cur+ch;
//                }
//            }
//            ans.push_back(move(cur));
//            return ans;
//        };
//
//        vector<string> names=split(path,'/');
//        vector<string> stack;
//        for(string &name:names){
//            if(name==".."){
//                if(!stack.empty()){
//                    stack.pop_back();
//                }
//            }else if(!name.empty()&&name!="."){
//                stack.push_back(move(name));
//            }
//        }
//
//        string ans;
//        if(stack.empty()){
//            ans="/";
//        }else{
//            for(string &i:stack){
//                ans+="/"+i;
//            }
//        }
//        return ans;
//    }
//};
class Solution {
public:
    string simplifyPath(string path) {
        auto split=[](const string &aString,char delim)->vector<string>{
            vector<string> ans;
            string cur;
            for(char ch:aString){
                if(ch==delim){
                    ans.push_back(move(cur));
                    cur.clear();
                }else{
                    cur+=ch;
                }
            }
            ans.push_back(move(cur));
            return ans;
        };

        vector<string> s=split(path,'/');
        vector<string> stack;
        for(string &str:s){
            if(str==".."){
                if(!stack.empty()){
                    stack.pop_back();
                }
            }else if(!str.empty()&&str!="."){
                stack.push_back(str);
            }
        }

        string ans;
        if(stack.empty()){
            ans="/";
        }else{
            for(string &ch:stack){
                ans+="/"+ch;
            }
        }
        return ans;
    }
};
// @lc code=end

