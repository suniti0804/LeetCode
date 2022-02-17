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
    
    bool helper(TreeNode*root, int key)
    {
        if(root==NULL)
            return true;
        return root->val==key&&helper(root->left,key)&&helper(root->right, key);
    }
    
    bool isUnivalTree(TreeNode* root) {
        if(root==NULL)
            return true;
        int key=root->val;
        return helper(root, key);
    }
};