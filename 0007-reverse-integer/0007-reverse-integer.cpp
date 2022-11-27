class Solution {
public:
    int reverse(int x) {
        vector<long long> eachDigit;
        vector<long long> ten;
        int track = 1;
        int howManyDigits = 0;
        bool negative = 0;
        if(x < 0){
            negative = 1;
            if(x == (-1) * pow(2, 31)){
                return 0;
            }
            x = x * (-1);
        }
        while(x != 0){
            eachDigit.push_back(x % 10);
            x = x / 10;
            cout<<track<<endl;
            ten.push_back(track);
            if(x != 0){
                track = track * 10;
            }
            howManyDigits++;
        }
        //cout<<ten[3 - 1]<<endl;
        long long answer = 0;
        for(int i = 0; i < howManyDigits; i++){
            answer = answer + eachDigit[i] * ten[howManyDigits - 1 - i];
        }
        if(answer > pow(2, 31) - 1 || answer < (-1) * pow(2, 31)){
            return 0;
        }
        if(negative){
            return answer * (-1);
        }else{
            return answer;
        }
    }
};