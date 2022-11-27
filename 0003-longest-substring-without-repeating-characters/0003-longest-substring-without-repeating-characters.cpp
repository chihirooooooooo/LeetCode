class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        char arr[s.length() + 1]; 
        strcpy(arr, s.c_str()); 
        cout<<sizeof(arr)<<endl;
        set<char> potential_max;
        for(int i = 0; i < sizeof(arr) - 1 ; i++){
            potential_max.insert(arr[i]);
        }
        int temp_answer = 0;
        int answer = 0;
        for(int i = 0; i < sizeof(arr) - 1; i++){
            set<char> check;
            for(int k = i; k < sizeof(arr) - 1; k++){
                if(check.find(arr[k]) == check.end()){
                    cout<<k<<endl;
                    check.insert(arr[k]);
                    temp_answer++;
                    cout<<temp_answer<<endl;
                }else{
                    break;
                }
            }
            if(temp_answer > answer){
              answer = temp_answer;  
            }
            if(potential_max.size() == check.size()){
                return potential_max.size();
            }
            temp_answer = 0; 
        }
        if(temp_answer > answer){
            answer = temp_answer;  
        }
        return answer;
    }
};