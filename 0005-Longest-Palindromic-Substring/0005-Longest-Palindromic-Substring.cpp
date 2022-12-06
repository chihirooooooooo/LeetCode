class Solution {
public:
    string longestPalindrome(string s) {
        int s_size = s.length();
        bool isPalindrome[s_size][s_size];
        memset(isPalindrome, 0, sizeof(isPalindrome));
        int start = 0;
        int target_length = 1;
        for(int i = 0; i < s_size; i++){
            isPalindrome[i][i] = true;
        }
        for(int i = 0; i < s_size - 1; i++){
            if(s[i] == s[i + 1]){
                isPalindrome[i][i + 1] = true;
                start = i;
                target_length = 2;
            }
        }
        for(int i = 3; i < s_size + 1; i++){
            for(int k = 0; k < s_size - i + 1; k++){
                int j = k + i - 1;
                if(isPalindrome[k + 1][j - 1] == true && s[k] == s[j]){
                    isPalindrome[k][j] = true;
                    if(i > target_length){
                        start = k;
                        target_length = i;
                    }
                }
            }
        }
        string answer = s.substr(start, target_length);
        return answer;
        
        
    }
};
