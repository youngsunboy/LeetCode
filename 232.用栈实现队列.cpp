/*
 * @lc app=leetcode.cn id=232 lang=cpp
 *
 * [232] 用栈实现队列
 */

// @lc code=start
class MyQueue {
private:
    stack<int> s1,s2;
    void in_out(){
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
    }
public:
    MyQueue() {

    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        if(s2.empty()){
            in_out();
        }
        int s=s2.top();
        s2.pop();
        return s;
    }
    
    int peek() {
        if(s2.empty()){
            in_out();
        }
        return s2.top();
    }
    
    bool empty() {
        return s2.empty()&&s1.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
// @lc code=end

