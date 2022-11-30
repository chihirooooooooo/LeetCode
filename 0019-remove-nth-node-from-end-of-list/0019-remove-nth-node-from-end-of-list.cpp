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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* current = head;
        int total_node = 1;
        while(current -> next != NULL){
            total_node++;
            current = current -> next;
        }
        int target = total_node - n + 1;
        if(total_node == 1){
            return NULL;
        }
        current = head;
        if(target == 1){
            head = current -> next;
        }
        for(int i = 0; i < target - 2; i++){
            current = current -> next;
        }
        current -> next = current -> next -> next;
        return head;
    }
};