class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head) return NULL;

        // 1. Interweave copied nodes right after each original node
        //    Original: A -> B -> C
        //    Interweaved: A -> A' -> B -> B' -> C -> C'
        Node* curr = head;
        while (curr) {
            Node* copy = new Node(curr->val);
            copy->next = curr->next;
            curr->next = copy;
            curr = copy->next;
        }

        // 2. Assign random pointers for the copied nodes
        curr = head;
        while (curr) {
            if (curr->random) {
                curr->next->random = curr->random->next;
            }
            curr = curr->next->next;
        }

        // 3. Separate the interweaved list back into original and copied lists
        Node* newHead = head->next;
        curr = head;
        while (curr) {
            Node* copy = curr->next;
            curr->next = copy->next;
            if (copy->next) {
                copy->next = copy->next->next;
            }
            curr = curr->next;
        }

        return newHead;
    }
};