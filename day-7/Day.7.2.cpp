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
     bool isMirror(TreeNode* p, TreeNode* q) {
      // base case
        if(!p && !q){
            return true;
        }
        if(p && q){
            return (p->val == q->val) 
            && isMirror(p->left,q->right)   // in mirror case jo p ke left me hoga vo q ke right me dhikega
            && isMirror(p->right,q->left);  // vice versa above

        }
        return false;
        
    }
    bool isSymmetric(TreeNode* root) {
        return isMirror(root->left,root->right);  // mirror laga diya 
        
    }
};
