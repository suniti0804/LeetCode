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
    vector<double> averageOfLevels(TreeNode* root) 
    {
        vector<double> res;
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()) 
        {
            long temp=0;
            int n=q.size();
            for(int i=0; i<n; i++) 
            {
                TreeNode* t=q.front();
                q.pop();
                if(t->left) 
                    q.push(t->left);
                if(t->right) 
                    q.push(t->right);
                temp+=t->val;
            }
            
            res.push_back((double)temp/n);
        }
        
        return res;
    }
};