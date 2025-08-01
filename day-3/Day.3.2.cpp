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
    TreeNode* invertTree(TreeNode* root) {
        // base case
        if(root == NULL){
            return NULL;
        }
        // 1 case me solve kar deta hu 
        swap(root->left,root->right);

        invertTree(root->left);
        invertTree(root->right);

        return root;
        
    }
};



// invert tree