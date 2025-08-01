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
    bool isSameTree(TreeNode* p, TreeNode* q) {
      // base case
        if(!p && !q){
            return true;
        }
        if(p && q){
            return (p->val == q->val) 
            && isSameTree(p->left,q->left)
            && isSameTree(p->right,q->right);

        }
        return false;
        
    }
};

// same tree  - 100 ques no 
