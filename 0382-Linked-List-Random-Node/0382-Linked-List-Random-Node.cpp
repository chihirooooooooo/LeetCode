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
    ListNode* current;
    ListNode* temp;
    Solution(ListNode* head) {
        current = head;
        temp = head;
    }
    
    int getRandom() {
        int count = 1;
        while(current -> next != NULL){
            count++;
            current = current -> next;
        }
        int number = rand() % count;
        current = temp;
        for(int i = 0; i < number; i++){
            current = current -> next;
        }
        int answer = current -> val;
        current = temp;
        return answer;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */
