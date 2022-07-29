/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
      if (left==right)
      {
          return head;
      }
    
        int p = right-left;
         
        int c=1;
        ListNode* curr=head;
        ListNode* prev=new ListNode(0);

        prev->next=head;
       
     
        int i=0;
        
        while(left>c)
        {
            prev=curr;
            curr=curr->next;
            c=c+1;
        }
        ListNode* nex=curr->next;
       
        while(p--)
        {
            curr->next=nex->next;
            nex->next=prev->next;
            prev->next=nex;
            nex=curr->next;
        }
            if(left==1)
            {
                return prev->next;
            }
        return head;
    }
};