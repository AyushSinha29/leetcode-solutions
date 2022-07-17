/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *FloydAlgorithm(ListNode *head) {
        ListNode *fast = head;
        ListNode *slow = head;
        while(fast!= NULL && fast->next != NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
            if(fast == slow)
            {
                return slow;
            }
        }
        return NULL;
    }
    ListNode *detectCycle(ListNode *head)
    {
        if(head == NULL)
        {
            return NULL;
        }
        
        ListNode *firstNode = FloydAlgorithm(head);
        if(firstNode == NULL)
        {
            return NULL;
        }
        
        ListNode *slow=head;
        while(slow != firstNode)
        {
            firstNode=firstNode->next;
            slow=slow->next;
            
        }
        return slow;
    }
};