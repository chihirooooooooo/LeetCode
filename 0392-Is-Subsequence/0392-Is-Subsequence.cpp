class Solution {
public:
    bool isSubsequence(string s, string t) {
        int current = 0;
        for(int i = 0; i < s.length(); i++){
            bool check = false;
            if(current == t.length()){
                return false;
            }
            for(;current < t.length(); current++){
                if(s[i] == t[current]){
                    current++;
                    check = true;
                    break;
                }
            }
            if(!check){
                return false;
            }
            cout<<current<<endl;
        }
        return true;
    }
};
