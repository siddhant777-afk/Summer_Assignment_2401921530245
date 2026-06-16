class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (!head || !head->next)
            return true;

        ListNode* fast = head;
        ListNode* slow = head;
        int n = 1;
        while (fast->next) {
            if (n % 2 == 0)
                slow = slow->next;
            fast = fast->next;
            n++;
        }
        ListNode* prev = nullptr;
        ListNode* curr = slow->next;
        ListNode* next = nullptr;
        while (curr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        ListNode* first = head;
        ListNode* second = prev;
        while (second) {
            if (first->val != second->val)
                return false;
            first = first->next;
            second = second->next;
        }

        return true;
    }
};