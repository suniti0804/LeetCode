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
    vector<vector<int>> levelOrder(TreeNode* root) 
    {
        if(root==NULL)
            return {};
        vector<vector<int>> res;
        queue<TreeNode*>q;
        
        q.push(root);
        
        while(!q.empty())
        {
            vector<int> temp;
            int n=q.size();
            
            for(int i=1; i<= n; i++)
            {
                TreeNode* t=q.front();
                q.pop();
                temp.push_back(t->val);
                
                if(t->left)
                    q.push(t->left);
                if(t->right)
                    q.push(t->right);
            }
            
            res.push_back(temp);
        }
        
        return res;
        
    }
};