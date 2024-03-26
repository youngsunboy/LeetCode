/*
 * @lc app=leetcode.cn id=762 lang=cpp
 *
 * [762] 二进制表示中质数个计算置位
 */

// @lc code=start
class Solution {
private:
    bool isPrime(int val){
        if(val<2){
            return false;
        }
        for(int i=2;i<=sqrt(val);i++){
            if(val%i==0){
                return false;
            }
        }
        return true;
    }

public:
    int countPrimeSetBits(int left, int right) {
        int count=0;
        for(int i=left;i<=right;i++){
            if(isPrime(__builtin_popcount(i))){
                count++;
            }
        }
        return count;
    }


    //int getOne(int val){
    //    int count=0;
    //    while(val){
    //        if(val&1==1){
    //            count++;
    //        }
    //        val=val>>1;
    //    }
    //    return count;
    //}
};
// @lc code=end

