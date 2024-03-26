/*
 * @lc app=leetcode.cn id=150 lang=cpp
 *
 * [150] 逆波兰表达式求值
 */

// @lc code=start
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;
        for(auto &token:tokens){
            if(token=="+"||token=="-"||token=="*"||token=="/"){
                int operand2=stk.top();
                stk.pop();
                int operand1=stk.top();
                stk.pop();
                stk.push(doWork(operand1,operand2,token));
            }else{
                stk.push(stoi(token));
            }
        }
        return stk.top();
    }
    int doWork(int num1,int num2,string operand){
        if(operand=="+"){
            return num1+num2;
        }else if(operand=="-"){
            return num1-num2;
        }else if(operand=="*"){
            return num1*num2;
        }else{
            return num1/num2;
        }
    }
};
// @lc code=end

