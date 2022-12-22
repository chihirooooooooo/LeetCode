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
    bool isPalindrome(ListNode* head) {
        stack<int> back;
        queue<int> front;
        ListNode* current = head;
        while(current != NULL){
            back.push(current -> val);
            front.push(current -> val);
            current = current -> next;
        }
        while(front.size() != 0){
            if(back.top() != front.front()){
                return false;
            }
            back.pop();
            front.pop();
        }
        return true;
    }

};
