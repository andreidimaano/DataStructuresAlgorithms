#include <queue>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


struct compare {
    bool operator()(const ListNode* l, const ListNode* r) const {
        return l->val > r->val;
    }
};

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode* >, compare> q;
        
        for(auto l: lists) {
            if(l){
                q.push(l);
            }
        }
        
        ListNode* dummy = new ListNode();
        ListNode* tail = dummy;
        
        while(!q.empty()) {
            tail->next = q.top();
            q.pop();
            tail = tail->next;
            if(tail->next){
                q.push(tail->next);
            }
        }
        
        return dummy->next;
    }
};