#include <unordered_map>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = nullptr;
        random = nullptr;
    }
};

class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*, Node*> nodeClones;
        Node* actual = head;
        while(actual) {
            Node* clone = new Node(actual->val);
            nodeClones[actual] = clone;
            actual = actual->next;
        }
        
        Node* wiring = head;
        while(wiring) {
            Node* clone = nodeClones[wiring];
            clone->random = nodeClones[wiring->random];
            clone->next = nodeClones[wiring->next];
            wiring = wiring->next;
        }
        
        return nodeClones[head];
    }
};