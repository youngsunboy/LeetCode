/*
 * @lc app=leetcode.cn id=9 lang=c
 *
 * [9] 回文数
 */

// @lc code=start
bool isPalindrome(int x) {
    if(x<0){
        return false;
    }
    long y=x,z=0;
    while(y){
        z=z*10+y%10;
        y/=10;
    }
    return x==z;
}
// @lc code=end

