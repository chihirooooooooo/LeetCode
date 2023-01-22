class Solution {
public:
    int minPartitions(string n){
        for(int i = 9; i >= 0; i--){
            string temp = to_string(i);
            if(n.find(temp) != string::npos){
                return i;
            }
        }
        return 0;
    }
};
