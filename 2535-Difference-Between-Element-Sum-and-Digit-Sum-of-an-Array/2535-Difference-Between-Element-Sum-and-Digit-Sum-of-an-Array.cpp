class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int ele_sum = 0;
        int dig_sum = 0;
        for(int i = 0; i < nums.size(); i++){
            ele_sum += nums[i];
            for(int k = 1000; k >= 1; k /= 10){
                dig_sum = dig_sum + nums[i] / k;
                nums[i] = nums[i] % k;
            }
        }
        return abs(ele_sum - dig_sum);
    }
};
