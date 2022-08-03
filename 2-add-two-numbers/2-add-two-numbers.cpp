class Solution {
public:
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

    int carry=0;
    ListNode *t1=l1, *t2=l2, *lastNode=t1;
    
    while(t1!=NULL && t2!=NULL){
        int value= t1->val + t2->val + carry;
        t1->val= value%10;
        carry= value/10;
        lastNode =t1;
        t1=t1->next;
        t2=t2->next;
    }
    
    if( t2!=NULL ){
        lastNode->next=t2;
        t1=lastNode->next;
    }
    
    while( t1!=NULL ){
        int value= t1->val + carry;
        t1->val= value%10;
        carry= value/10;
        lastNode =t1;
        t1= t1->next;
    }
    
    if(carry!=0){
        ListNode *node=new ListNode(carry);
        lastNode->next= node;
    }
    
    return l1;
}
};