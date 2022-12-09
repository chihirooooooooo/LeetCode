class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int answer = 0;
        while(true){
            if(count(nums.begin(), nums.end(), answer) != 0){
                answer++;
            }else{
                break;
            }
        }
        return answer;
    }

};
