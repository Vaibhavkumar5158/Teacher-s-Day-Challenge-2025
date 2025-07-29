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
    int maxDepth(TreeNode* root) {
        // base case
        if(root == NULL){
            return 0;    // height 0
        }

        int leftheight = maxDepth(root->left) + 1;
        int rightheight = maxDepth(root->right) + 1;
        int ans = max(leftheight,rightheight);
        return ans;

        
    }
};



// L1 binary trees 9 july2025 01:31:25
//dono subtree left ,right hi height nikal lo and root node ko bhi inlude karna padega (+1) then dono ka max lelo