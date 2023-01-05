
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* curr = head;
        if(head == NULL){
            return NULL;
        }
        ListNode* prev = NULL;
        ListNode* forward = NULL;
        int count =0;
        while( curr != NULL && count<k){
            forward = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = forward;
            count++;
        }

         int len=0;
        ListNode* temp=forward;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        if(forward!=NULL && len>=k){
            head->next=reverseKGroup(forward, k);
        }
        else{
            head->next=forward;
        }
        return prev;
    }
};