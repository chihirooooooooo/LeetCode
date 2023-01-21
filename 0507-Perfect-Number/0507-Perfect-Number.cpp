class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num == 1){
            return false;
        }
        int temp = 1;
        for(int i = 2; i < sqrt(num); i++){
            if(num % i == 0){
                temp += i;
                int pair = num / i;
                temp += pair;
            }
        }
        if(temp == num){
            return true;
        }
        return false;
    }
};
