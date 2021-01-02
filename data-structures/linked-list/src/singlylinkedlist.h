#ifndef singlylinkedlist
#define singlylinkedlist

#include <iostream>
#include "node.h"

using namespace std;

struct Node;

class LinkedList {
    public:
        void push(Node* node){
            //push it to the front
            if(this->head) {
                node->next = head;
            }
            this->head = node;
        };
        void append(Node* node){
            if(!head) {
                this->head = node;
                return;
            }
            Node* temp = head;
            while(temp->next) {
                temp = temp->next;
            }

            temp->next = node;
        }
        void remove(int value) {
            Node* prev;
            Node* temp = head;

            // case 1: delete head
            if(head && head->value == value) {
                head = head->next;
                delete temp;
            }

            // case 2: any other node
            while(temp && temp->value != value) {
                prev = temp;
                temp = temp->next;
            }

            if(temp->value == value) {
                prev->next = temp->next;
                delete temp;
            }
        }
        void insertAfter(Node* prev, const int & value) {
            Node* newNode = new Node();
            newNode->value = value;
            prev->next = newNode;
        }
        void insertNodeAfter(Node* prev, Node* node) {
            if(!isChild(prev->value, node->value)) {
                if(prev->next) {
                    Node* temp = node;
                    while(temp->next) {
                        temp = temp->next;
                }

                temp->next = prev->next;
                }

                prev->next = node;
            }
        }
        Node* getNode(const int & value) const {
            Node* temp = head;

            while(temp && temp->value != value) {
                temp = temp->next;
            }

            return (temp->value == value) ? temp : nullptr;
        }

        void printList() const {
            Node* temp = head;
            while(temp){
                cout << temp->value;
                if(temp->next) {
                    cout << ", ";
                }
                temp = temp->next;
            }
        }
    private:
        Node* head = nullptr;
        bool isChild(int parent, int valueToCheck) {
            Node* temp = head;
            while(temp) {
                if(temp->value == valueToCheck) {
                    return true;
                }
                temp = temp->next;
            }

            return false;
        }
};

#endif