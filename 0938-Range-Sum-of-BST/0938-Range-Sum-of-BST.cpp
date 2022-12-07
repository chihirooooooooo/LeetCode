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
    int rangeSumBST(TreeNode* root, int low, int high) {
        int answer = 0;
        if(root -> val >= low && root -> val <= high){
            //cout<<root -> val<<endl;
            answer += root -> val;     
        }
        if(root -> left != NULL){
           answer += rangeSumBST(root -> left, low , high); 
        }
        if(root -> right != NULL){
           answer += rangeSumBST(root -> right, low, high);
        }
        return answer;

    }
};
