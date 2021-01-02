#include <iostream>
#include "node.h"
#include "singlylinkedlist.h"
using namespace std;


int main() {
    LinkedList list;
    LinkedList list2;

    cout << "hello world";
    // Node* n1 = new Node();
    // n1->value = 1;
    // list.push(n1);

    // Node* n2 = new Node();
    // n2->value = 2;
    // list.push(n2);

    // Node* n3 = new Node();
    // n3->value = 3;
    // list.push(n3);

    Node* n1 = new Node();
    n1->value = 1;
    list.append(n1);

    Node* n2 = new Node();
    n2->value = 2;
    list.append(n2);

    Node* n3 = new Node();
    n3->value = 3;
    list.append(n3);

    //list 2
    Node* n4 = new Node();
    n4->value = 4;
    list2.append(n4);

    Node* n5 = new Node();
    n5->value = 5;
    list2.append(n5);

    Node* n6 = new Node();
    n6->value = 6;
    list2.append(n6);

    list.insertNodeAfter(n3, n4);
    
    list.printList();
    // list2.printList();

    return 0;
}