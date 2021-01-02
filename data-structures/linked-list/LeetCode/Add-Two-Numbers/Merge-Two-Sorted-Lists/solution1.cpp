struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x): val(x), next(nullptr) {}
    ListNode(int x, ListNode* next): val(x), next(next) {}
};


class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* dummyHead = new ListNode();

        ListNode* curr = dummyHead;
        while(l1 && l2) {
            if(l1->val <= l2->val){
                curr->next = new ListNode(l1->val);
                l1 = l1->next;
            } else {
                curr->next = new ListNode(l2->val);
                l2 = l2->next;
            }

            curr = curr ->next;
        }

        curr->next = (l1)? l1: l2;
        return dummyHead->next;
    }
};