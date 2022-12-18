class Solution {
public:
    int longestPalindrome(string s) {
        map<char, int> count;
        bool flag = false;
        int answer = 0;
        for(int i = 0; i < s.length(); i++){
            count[s[i]]++;
        }
        map<char, int>::iterator it = count.begin();
        while(it != count.end()){
            if(!flag && it -> second % 2 == 1){
                flag = true;
            }
            int temp = it -> second;
            answer = answer + it -> second / 2;
            it++;
        }
        answer = answer * 2;
        if(flag){
            answer++;
        }
        return answer;
    }
};
