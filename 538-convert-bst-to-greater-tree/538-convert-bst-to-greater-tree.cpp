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
class Solution 
{
public:
    void solve(TreeNode* root, int& curr_sum)
    {
        if (!root) 
            return;
        
        if (root->right) 
            solve(root->right, curr_sum);

        curr_sum+=root->val;
        root->val=curr_sum;
        
        if(root->left) 
            solve(root->left, curr_sum);
    }
    
    TreeNode* convertBST(TreeNode* root) 
    {
        int curr_sum=0;
        solve(root, curr_sum);
        return root;
    }
};