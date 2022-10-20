ListNode* Solution::swapPairs(ListNode* A) {
    
    ListNode* dummy = new ListNode(-1);
    dummy->next = A;
    ListNode* prev = dummy;
    ListNode* curr = A;
    
    while(curr!=NULL and curr->next!=NULL){
        prev->next = curr->next;
        curr->next = prev->next->next;
        prev->next->next = curr;
        prev=curr;
        curr=curr->next;
        
    }
    return dummy->next;
}
