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
    int numComponents(ListNode* head, vector<int>& nums) {
        int answer = 0;
        bool streak = false;
        ListNode* current = head;
        while(true){
            if(current == NULL){
                break;
            }
            if(find(nums.begin(), nums.end(), current -> val) != nums.end()){
                streak = true;
            }else{
                if(streak){
                    answer++;
                    streak = false;
                }
            }
            current = current -> next;
        }
        if(streak){
            answer++;
        }
        return answer;
    }
};
