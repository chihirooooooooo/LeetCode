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
    ListNode* middleNode(ListNode* head) {
        ListNode* current = head;
        int num = 0;
        while(current -> next != NULL){
            current = current -> next;
            num++;
        }
        if(num % 2 == 0){
            num = num / 2;
        }else{
            num = num / 2 + 1;
        }
        cout<<num<<endl;
        for(int i = 0; i < num; i++){
            head = head -> next;
        }
        return head;
    }
};