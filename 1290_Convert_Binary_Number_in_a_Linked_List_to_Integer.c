/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


int getDecimalValue(struct ListNode* head){
    int num;
    struct ListNode* lead = head;
    while(lead){
        num = num << 1;
        num+=lead->val;
        lead = lead->next;
    }
    return num;
}
