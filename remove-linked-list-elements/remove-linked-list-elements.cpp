class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL) return head;
        while(head!=NULL&&head->val==val){
            head=head->next;
        }
        
        ListNode* p=NULL;
        ListNode* temp=head;
        while(temp!=NULL){
            if(temp!=NULL&&temp->val==val){
                p->next=temp->next;
                temp=temp->next;
            }
            else{
                p=temp;
                temp=temp->next;
            }
        }
        return head;
    }
};