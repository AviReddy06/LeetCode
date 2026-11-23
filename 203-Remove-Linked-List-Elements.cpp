class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode dummy(0, head);
        ListNode* curr = &dummy;

        while (curr->next != nullptr) {
            if (curr->next->val == val) {
                ListNode* del = curr->next;
                curr->next = curr->next->next;
                delete del;
            } else {
                curr = curr->next;
            }
        }

        return dummy.next;
    }
};