class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        int arr_size = nums.size();
        int left_sum[arr_size];
        left_sum[0] = 0;
        for(int i = 1; i < arr_size; i++){
            left_sum[i] = left_sum[i - 1] + nums[i - 1];
        }
        int right_sum[arr_size];
        right_sum[0] = 0;
        for(int i = 1; i < arr_size; i++){
            right_sum[i] = right_sum[i - 1] + nums[arr_size - i];
        }
        vector<int> answer;
        for(int i = 0; i < arr_size; i++){
            answer.push_back(abs(left_sum[i] - right_sum[arr_size - 1 - i]));
        }
        return answer;

    }
};
