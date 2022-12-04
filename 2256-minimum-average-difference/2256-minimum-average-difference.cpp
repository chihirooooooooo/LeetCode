class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int answer = nums.size() - 1;
        long long left_total = 0;
        long long right_total = 0;
        for(int i = 0; i < nums.size(); i++){
            right_total += nums[i];
        }
        int check = right_total / nums.size();
        for(int i = 0; i < nums.size() - 1; i++){
            left_total += nums[i];
            right_total -= nums[i];
            int left_size = i + 1;
            int right_size = nums.size() - i - 1;
            int left_ave = left_total / left_size;
            int right_ave = right_total / right_size;
            if(check > abs(left_ave - right_ave)){
                answer = i;
                check = abs(left_ave - right_ave);
            }else if (check == abs(left_ave - right_ave)){
                if(i < answer){
                    answer = i;
                }
            }
        }
        return answer;
        
    }
};