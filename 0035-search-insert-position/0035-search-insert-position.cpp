class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int answer;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == target){
                answer = i;
                break;
            }else if(nums[i] > target){
                answer = i;
                break;
            }
        }
        return answer;
    }
};