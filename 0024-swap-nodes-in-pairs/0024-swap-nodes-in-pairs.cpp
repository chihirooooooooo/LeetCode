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
    ListNode* swapPairs(ListNode* head) {
        ListNode* current = head;
        ListNode* answer;
        if(head == NULL){
            return NULL;
        }
        if(head -> next != NULL){
            answer = head -> next;
        }else{
            return head;
        }
        while(current != NULL){
            
            ListNode* temp = current;
            if(current -> next == NULL){
                break;
            }
            ListNode* temp_next = current -> next;
            if(current -> next -> next == NULL){
                current -> next = NULL;
                current = temp_next;
                current -> next = temp;
                break;
            }
            ListNode* temp_next_next = current -> next -> next;
            if(current -> next -> next -> next == NULL ){
                current -> next = temp_next->next;
                current = temp_next;
                current -> next = temp;
                break;
            }
            current -> next = current -> next -> next -> next;
            current = temp_next;
            current -> next = temp;
            current = temp_next_next;
        }
        return answer;
    }
};