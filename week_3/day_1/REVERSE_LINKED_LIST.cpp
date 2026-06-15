class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = head;
        if (curr == nullptr) {
            return head;
        }
        while (curr->next) {
            curr = curr->next;
        }
        while (prev != curr) {
            prev = head->next;
            head->next = curr->next;
            curr->next = head;
            head = prev;
        }
        return head;
    }
};