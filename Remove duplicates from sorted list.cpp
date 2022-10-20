// Recursive
// TC = O(N)
// SC = O(N)

ListNode* Solution::deleteDuplicates(ListNode* A) {
    
    ListNode* dummy = new ListNode(-1);
    dummy ->next = A;
    ListNode* prev = A;
    ListNode* curr = A->next;
    
    while(curr!=NULL and curr->next!=NULL){
        if(curr->val == prev->val){
            while(curr->val == prev->val){
                curr=curr->next;
            }
            prev->next = curr;
            prev = curr;
            curr = curr->next;
        }else{
            prev = curr;
            curr = curr->next;
        }
    }
    return dummy->next;
}

//Iterative
//TC = O(N)
//SC = O(1)

ListNode* Solution::deleteDuplicates(ListNode* A) {
    
    if(A==NULL || A->next ==NULL) return A;
    ListNode* temp = A;
    
    while(temp->next!=NULL){
        if(temp->val == temp->next->val){
            temp->next = temp->next->next;
        }else{
            temp = temp->next;
        }
    }
    return A;
}
