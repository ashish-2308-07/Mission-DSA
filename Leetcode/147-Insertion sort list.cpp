class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        if (head->next == nullptr) return head;
        ListNode* it = head->next; 
        ListNode* last_key = head; 
        while (it != nullptr) {
            if (it->val >= last_key->val) { 
                last_key = it; it = it->next;
            } else {
                ListNode* h = head; 
                if (it->val < head->val) { 
                    last_key->next = it->next;
                    it->next = head;
                    head = it;
                    it = last_key->next;
                    continue;
                } 
                while (h->next->val <= it->val) {
                    h = h->next;
                }
                last_key->next = it->next;
                ListNode* temp = h->next;
                h->next = it;
                it->next = temp;
                it = last_key->next;
            }
        }

        return head;
    }
};
