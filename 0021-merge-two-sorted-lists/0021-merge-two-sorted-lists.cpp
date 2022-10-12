class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1) return list2;
        if(!list2) return list1;
        ListNode* head = list1->val <= list2->val ? list1 : list2;
        head->next = list1->val <= list2->val ? mergeTwoLists(list1->next,list2) : mergeTwoLists(list1,list2->next);
        return head;
    }
};