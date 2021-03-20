#ifndef nodeh
#define nodeh

struct Node {
    int value;
    Node* next = nullptr;
};

/* struct Node {
    int value;
    Node* next;
    Node() : value(0), next(nullptr) {} 
    Node(int x) : value(x), next(nullptr) {} 
    Node(int x, Node* next) : value(x), next(nullptr) {}
};
*/

#endif