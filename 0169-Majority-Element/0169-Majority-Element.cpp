class Solution {
public:
    int majorityElement(vector<int>& nums) {
        set<int> ele;
        int answer;
        for(int i = 0; i < nums.size(); i++){
            ele.insert(nums[i]);
        }
        set<int>::iterator itr; 
        for(itr = ele.begin(); itr != ele.end(); itr++){
            if(count(nums.begin(), nums.end(), *itr) > nums.size() / 2){
                answer = *itr;
            }
        }
        return answer;
    }
};
