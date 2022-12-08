/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
         list<TreeNode*> waitingFor1 = {root1};
         list<TreeNode*> waitingFor2 = {root2};
         vector<int> leafValueFor1;
         vector<int> leafValueFor2;
         while(waitingFor1.size() != 0){
             TreeNode* current = waitingFor1.front();
             waitingFor1.pop_front();
             if(current -> right != NULL){
                 waitingFor1.push_front(current -> right);
             }
             if(current -> left != NULL){
                 waitingFor1.push_front(current -> left);
             }
             if(current -> left == NULL && current -> right == NULL){
                 leafValueFor1.push_back(current -> val);
             }
         }
         int k = 0;
         while(waitingFor2.size() != 0){
             TreeNode* current = waitingFor2.front();
             waitingFor2.pop_front();
             if(current -> right != NULL){
                 waitingFor2.push_front(current -> right);
             }
             if(current -> left != NULL){
                 waitingFor2.push_front(current -> left);
             }
             if(current -> left == NULL && current -> right == NULL){
                 if(k >= leafValueFor1.size()){
                     return false;
                 }else{
                     if(leafValueFor1[k] == current -> val){
                         k++;
                     }else{
                         return false;
                     }
                 }
             }
         }
         if(k < leafValueFor1.size()){
             return false;
         }
         return true;
    }
};
