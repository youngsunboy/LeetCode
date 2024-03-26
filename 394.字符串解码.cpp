/*
 * @lc app=leetcode.cn id=394 lang=cpp
 *
 * [394] 字符串解码
 */

// @lc code=start
class Solution {
public:
    string src;
    size_t ptr;

    int getDigits(){
        int ret=0;
        while(ptr<src.size()&&isdigit(src[ptr])){
            ret=ret*10+src[ptr++]-'0';
        }
        return ret;
    }
    string getString(){
        if(ptr==src.size()||src[ptr]==']'){
            return "";
        }
        char cur=src[ptr];
        int repTime=1;
        string ret;
        if(isdigit(src[ptr])){
            repTime=getDigits();
            ptr++;
            string str=getString();
            ptr++;
            while(repTime--){
                ret+=str;
            }
        }else if(isalpha(cur)){
            ret=string(1,src[ptr++]);
        }
        return ret+getString();
    }
    string decodeString(string s) {
        src=s;
        ptr=0;
        return getString();
    }
};
// @lc code=end

