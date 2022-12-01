class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int size = matrix[0].size();
        vector<vector<int>> temp;
        for(int k = 0; k <= size -1; k++){
            vector<int> row;
            for(int i = size - 1; i >= 0; i--){
                row.push_back(matrix[i][k]);
            }
            temp.push_back(row);
        }
        matrix.clear();
        matrix = temp;
    }
};