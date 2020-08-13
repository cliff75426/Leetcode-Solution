/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


bool isPalindrome(struct ListNode* head){
    struct ListNode *half,*pin;
    int size=0;
    half = head;
    while(half){
        size++;
        half=half->next;
    }
    
    half = head;
    pin = head;
    for(int i=0;i<(size/2);i++){
        printf("%d ",half->val);
        half = half->next;
        if(i==0){
            head->next = NULL;
            pin = half;
        }else{
            pin->next = head;
            head = pin;
            pin = half;
        }
        
    }
    
    if(size%2==1) half=half->next;
    while(half != NULL&&head != NULL){
        //printf("%d+%d ",half->val,head->val);
        if(head->val != half->val) return false;
        
        half = half->next;
        head = head->next;
    }
    
    return true;
    
    
}
