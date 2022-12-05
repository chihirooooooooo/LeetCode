class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        multiset<int> check;
        int answer = 0;
        for(int i = 0; i < nums.size(); i++){
            check.insert(nums[i]);
        }
        int track = 1;
        while(true){
            int exist = check.count(track);
            if(exist == 0){
                answer = track;
                break;
            }
            track++;
        }
        return answer;
    }
};