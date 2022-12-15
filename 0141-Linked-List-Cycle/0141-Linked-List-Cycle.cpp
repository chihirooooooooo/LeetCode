/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL){
            return false;
        }
        ListNode* current = head;
        set<ListNode*> track;
        track.insert(current);
        while(current -> next != NULL){
            current = current -> next;
            if(track.count(current) == 1){
                return true;
            }else{
                track.insert(current);
            }
        }
        return false;



    }
};
