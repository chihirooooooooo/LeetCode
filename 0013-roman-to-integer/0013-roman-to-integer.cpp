class Solution {
public:
    int romanToInt(string s) {
        int answer = 0;
        for(int i = 0; i < s.length(); i++){
            if(i != s.length() - 1){
                if(s[i] == 'I' && (s[i+1] == 'V' || s[i+1] == 'X')){
                    answer -= 1;
                    continue;
                }else if(s[i] == 'X' && (s[i+1] == 'L' || s[i+1] == 'C')){
                    answer -= 10;
                    continue;
                }else if(s[i] == 'C' && (s[i+1] == 'D' || s[i+1] == 'M')){
                    answer -= 100;
                    continue;
                }
            }
            if(s[i] == 'I'){
                answer += 1;
            }else if(s[i] == 'V'){
                answer += 5;
            }else if(s[i] == 'X'){
                answer += 10;
            }else if(s[i] == 'L'){
                answer += 50;
            }else if(s[i] == 'C'){
                answer += 100;
            }else if(s[i] == 'D'){
                answer += 500;
            }else{
                answer += 1000;
            }   
        }
        return answer;
    }
};