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
   vector<int> depth;
    vector<int> par;
    void dfs(TreeNode *root, int p, int x, int y, int d) {
        if(!root) return;
        if(root->val == x || root->val == y) { 
            depth.push_back(d);
            par.push_back(p);
        }
        dfs(root->left, root->val, x, y, d+1);
        dfs(root->right, root->val, x, y, d+1);
    } 
public:
    bool isCousins(TreeNode* root, int x, int y) {
        dfs(root, -1, x, y, 0);
        return depth[0] == depth[1] && par[0] != par[1];
    }
};