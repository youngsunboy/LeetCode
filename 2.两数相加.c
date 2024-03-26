/*
 * @lc app=leetcode.cn id=2 lang=c
 *
 * [2] 两数相加
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *res=(struct ListNode *)malloc(sizeof(struct ListNode));
    res->next=NULL;
    struct ListNode *cur=res;
    int sum=0;
    while(l1||l2||sum){
        if(l1){
            sum+=l1->val;
            l1=l1->next;
        }
        if(l2){
            sum+=l2->val;
            l2=l2->next;
        }
        cur->next=(struct ListNode *)malloc(sizeof(struct ListNode));
        cur->next->val=sum%10;
        cur=cur->next;
        cur->next=NULL;
        sum/=10;
    }
    return res->next;
}
// @lc code=end

