class Solution {
public:
    bool halvesAreAlike(string s) {
        int first_half_vowels = 0;
        int second_half_vowels = 0;
        for(int i = 0; i < s.length() / 2; i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
                first_half_vowels++;
            }
            if(s[i + s.length() / 2] == 'a' || s[i + s.length() / 2] == 'e' || s[i + s.length() / 2] == 'i' || s[i + s.length() / 2] == 'o' || s[i + s.length() / 2] == 'u' || s[i + s.length() / 2] == 'A' || s[i + s.length() / 2] == 'E' || s[i + s.length() / 2] == 'I' || s[i + s.length() / 2] == 'O' || s[i + s.length() / 2] == 'U'){
                second_half_vowels++;
            }
        }
        if(first_half_vowels == second_half_vowels){
            return true;
        }
        return false;
    }
};