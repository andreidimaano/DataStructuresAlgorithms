struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x): val(x), next(nullptr) {}
    ListNode(int x, ListNode* next): val(x), next(next) {}
};

class Solution {
    public:
        ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
            ListNode* dummyHead = new ListNode(0);
            ListNode* curr = dummyHead;
            int carry = 0;
            while(l1 || l2) {
                int operand1 = (l1) ? l1->val : 0;
                int operand2 = (l2) ? l2->val : 0;

                int sum = operand1 + operand2 + carry;
                carry = (sum / 10);
                
                curr->next = new ListNode(sum % 10);
                curr = curr->next;

                if(l1) l1 = l1->next;W
                if(l2) l2 = l2->next;
            }

            if(carry != 0) {
                curr->next = new ListNode(carry);
            }

            return dummyHead->next;
        }
};