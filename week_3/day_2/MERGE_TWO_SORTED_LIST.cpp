class Solution {
public:
    ListNode* mergeTwoLists(ListNode* List1, ListNode* List2) {
        if (!List1 && !List2)
            return nullptr;
        ListNode* temp = List1;
        ListNode* temp1 = List2;
        if (!temp)
            return List2;
        if (!temp1)
            return List1;
        ListNode dummy(0);
        ListNode* temp2 = &dummy;
        while (temp || temp1) {
            if (!temp1 || (temp && (temp->val < temp1->val))) {
                temp2->next = temp;
                temp2 = temp;
                temp = temp->next;
            } else {
                temp2->next = temp1;
                temp2 = temp1;
                temp1 = temp1->next;
            }
        }
        return dummy.next;
    }
};