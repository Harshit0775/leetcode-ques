/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
   
        
        ListNode* fast = A;
        ListNode* slow = A;
        ListNode* prevslow = A;
        int flag = 0;
        
        for(int i=0;i<B;i++){
            
            fast=fast->next;
            if(fast==NULL){
                flag = 1;
                break;
            }
        }
        
        if(flag) return A->next;
        
        while(fast!= NULL){
            fast = fast->next;
            prevslow = slow;
            slow = slow->next;
        }
        
        prevslow->next = slow->next;
        delete slow;
        
        return A;
    
}
