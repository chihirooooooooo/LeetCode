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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* current = head;
        if(current == NULL){
            return head;
        }
        int prev_val = current -> val;
        bool flag = false;
        while(current != NULL){
            if(current -> next == NULL){
                break;
            }
            ListNode* next = current -> next;
            while(next -> val == prev_val){
                if(next -> next == NULL){
                    flag = true;
                    break;
                }
                next = next -> next;
            }
            if(flag){
                break;
            }
            prev_val = next -> val;
            current -> next = next;
            current = current -> next;
        }
        current -> next = NULL;
        return head;
    }
};
