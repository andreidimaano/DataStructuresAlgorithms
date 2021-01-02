struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x): val(x), next(nullptr) {}
    ListNode(int x, ListNode* next): val(x), next(next) {}
};


class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while(m > 1) {
            prev = curr;
            curr = curr->next;
            m--;
            n--;
        }

        ListNode* connection = prev;
        ListNode* tail = curr;

        ListNode* third = nullptr;
        while(n > 0) {
            third = curr->next;
            curr->next = prev;
            prev = curr;
            curr = third;
            n--;
        }

        if(connection) {
            connection->next = prev;
        } else {
            head = prev;
        }

        tail->next = curr;

        return head;
    }
};