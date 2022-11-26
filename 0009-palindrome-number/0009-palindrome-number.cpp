class Solution {
public:
    bool isPalindrome(int x) {
        vector<int> x_separate;
        if(x < 0){
            return false;
        }
        while(x != 0){
            x_separate.push_back(x%10);
            x /= 10;
        }
        for(int i = 0; i < x_separate.size() / 2; i++){
            if(x_separate[i] != x_separate[x_separate.size() - 1 - i]){
                return false;
            }
        }
        return true;
    }
};