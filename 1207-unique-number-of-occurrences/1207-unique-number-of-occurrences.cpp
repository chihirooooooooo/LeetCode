class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int check[2001];
        for(int i = 0; i < 2001; i++){
            check[i] = 0;
        }
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] >= 0){
                check[arr[i]]++;
            }else{
                check[arr[i] * (-1) + 1000]++;
            }
        }
        // cout<<check[1]<<endl;
        // cout<<check[2]<<endl;
        // cout<<check[3]<<endl;
        int count[1001];
        for(int i = 0; i < 1001; i++){
            count[i] = 0;
        }
        for(int i = 0; i < 2001; i++){
            if(check[i] != 0){
                count[check[i]]++;
                if(count[check[i]] > 1){
                    return false;
                }
            }
        }
        return true;
    }
};