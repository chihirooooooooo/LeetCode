/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        int node_value = target -> val;
        TreeNode* current;
        queue<TreeNode*> queue_node;
        queue_node.push(cloned);
        while(true){
            current = queue_node.front();
            queue_node.pop();
            if(current -> val == node_value){
                return current;
            }
            if(current -> left != NULL){
                queue_node.push(current -> left);
            }
            if(current -> right != NULL){
                queue_node.push(current -> right);
            }
        }
        
    }

};
