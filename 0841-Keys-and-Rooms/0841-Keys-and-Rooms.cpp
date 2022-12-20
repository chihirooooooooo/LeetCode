class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<int> checked;
        checked.push_back(0);
        queue<int> queue;
        for(int i = 0; i < rooms[0].size(); i++){
            queue.push(rooms[0][i]);
        }
        while(!queue.empty()){
            int checking = queue.front();
            queue.pop();
            if(find(checked.begin(), checked.end(), checking) == checked.end()){
                checked.push_back(checking);
                for(int i = 0; i < rooms[checking].size(); i++){
                    queue.push(rooms[checking][i]);
                }
            }
        }
        if(checked.size() == rooms.size()){
            return true;
        }
        return false;
    }
};
