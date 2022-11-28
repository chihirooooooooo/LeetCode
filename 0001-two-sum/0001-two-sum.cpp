class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> answer;
        for(int i = 0; i < nums.size(); i++){
            for(int k = i + 1; k < nums.size(); k++){
                if(nums[i] + nums[k] == target){
                    answer.push_back(i);
                    answer.push_back(k);
                    return answer;
                }
            }
        }
        return answer;
    }
};