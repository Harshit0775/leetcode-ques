class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        
        if(head->next==NULL) return NULL;
        ListNode* prev = NULL;
        ListNode* fast = head;
        ListNode* slow = head;
        
        while(fast != NULL && fast->next != NULL){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
            
        }
        
        prev ->next = prev->next->next;
        delete(slow);
        
        return head;
        
    }
};
