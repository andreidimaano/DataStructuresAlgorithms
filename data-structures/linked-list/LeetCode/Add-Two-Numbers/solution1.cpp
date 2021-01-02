#include <math.h>
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
            int operand1 = listToNumber(l1);
            int operand2 = listToNumber(l2);

            int result = operand1 + operand2;

            return numberToList(result);
        }
        int listToNumber(ListNode* list) {
            int multiplier = 0, number = 0;
            ListNode* temp = list;

            while(temp){
                int value = temp->val * (pow(10, multiplier));
                number += value;
                multiplier++;
                temp = temp->next;
            }

            return number;
        }
        ListNode* numberToList(int number) {
            ListNode* head = nullptr;
            int digit = number % 10;
            number /= 10;
            
            head = new ListNode(digit);
            ListNode* temp = head;

            while(number > 0){
                int digit = number % 10;
                number /= 10; 
                temp->next = new ListNode(digit);
                temp = temp->next;
            }

            return head;
        }
};