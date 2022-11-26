/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* currentForAnswer = new ListNode();
        ListNode* answer = currentForAnswer;
        ListNode* previous = NULL;
        ListNode* next = NULL;
        /*while(l1 != NULL){
            next = l1 -> next;
            l1 -> next = previous;
            previous = l1;
            if(next == NULL){
                break;
            }
            l1 = next;
        }
        previous = NULL;
        next = NULL;
        while(l2 != NULL){
            next = l2 -> next;
            l2 -> next = previous;
            previous = l2;
            if(next == NULL){
                break;
            }
            l2 = next;
        }*/
        int carry = 0;
        while(l1 != NULL || l2 != NULL){
            if(l1 != NULL && l2 != NULL){
                currentForAnswer -> val = l1 -> val + l2 -> val + carry;
                l1 = l1 -> next;
                l2 = l2 -> next;
            }else if(l1 != NULL){
                currentForAnswer -> val = l1 -> val + carry;
                l1 = l1 -> next;
            }else{
                currentForAnswer -> val = l2 -> val + carry;
                l2 = l2 -> next;
            }
            carry = 0;
            if(currentForAnswer -> val >= 10){
                currentForAnswer -> val -= 10;
                carry = 1;
            }
            if(l1 != NULL || l2 != NULL){
                currentForAnswer -> next = new ListNode();
                currentForAnswer = currentForAnswer -> next;
            }else{
                if(carry == 1){
                    currentForAnswer -> next = new ListNode();
                    currentForAnswer = currentForAnswer -> next;
                    currentForAnswer -> val = carry;
                }
            }
        }
        return answer;
    }
};