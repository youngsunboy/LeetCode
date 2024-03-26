/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */

// @lc code=start
class Solution {
private:
    stack<char> stk;
public:
    bool isValid(string s) {
        int i=0;
        bool balanced=true;
        while(i<s.size() && balanced){
            char symbol=s[i];
            if(symbol=='{'||symbol=='('||symbol=='['){
                stk.push(symbol);
            }else{
                if(stk.empty()){
                    balanced=false;
                }else{
                    char top=stk.top();
                    stk.pop();
                    if(top!=match(symbol)){
                        balanced=false;
                    }
                }
            }
            i++;
        }
        return stk.empty()&&balanced;
    }

    char match(char a){
        if(a=='}')
            return '{';
        else if(a==']')
            return '[';
        return '(';
    }
};
// @lc code=end

