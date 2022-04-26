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
    int solve(TreeNode* root, int curr_val, int& res)
    {
        if(!root)
            return 0;
        
        int l=solve(root->left, root->val, res);
        int r=solve(root->right, root->val, res);
        
        res=max(res, r+l);
        
        if(curr_val==root->val)
            return max(r,l)+1;
        
        return 0;
    }
    
    int longestUnivaluePath(TreeNode* root) 
    {
        int res=0;
        solve(root, INT_MIN, res);
        return res;
    }
};