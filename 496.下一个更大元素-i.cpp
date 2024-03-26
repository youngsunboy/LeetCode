/*
 * @lc app=leetcode.cn id=496 lang=cpp
 *
 * [496] 下一个更大元素 I
 */

// @lc code=start

//自己写的屎山
//class Solution {
//public:
//    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
//        int i,j;
//        int len1=nums1.size(),len2=nums2.size();
//        vector<int> res;
//        for(i=0;i<len1;i++){
//            for(j=0;j<len2;j++){
//                if(nums1[i]==nums2[j]){
//                    int k=j+1;
//                    while(k<len2){
//                        if(nums2[k]>nums2[j]){
//                            res.push_back(nums2[k]);
//                            break;
//                        }
//                        k++;
//                    }
//                    if(k==len2){
//                        res.push_back(-1);
//                    }
//                }
//            }
//        }
//        return res;
//    }
//};

//力扣官方题解
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        vector<int> res(m);
        for(int i=0;i<m;i++){
            int j=0;
            while(j<n&&nums1[i]!=nums2[j]){
                j++;
            }
            int k=j+1;
            while(k<n&&nums2[k]<nums2[j]){
                k++;
            }
            res[i]= k<n ? nums2[k] : -1;
        }
        return res;
    }
};
// @lc code=end

