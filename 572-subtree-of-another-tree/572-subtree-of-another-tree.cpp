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
    
    vector<TreeNode*> ref;
    
    void get(TreeNode *t, int &x)
    {
        if(!t)
        {
            return;
        }
        if(t->val==x)
        {
            ref.push_back(t);
        }
        get(t->left, x);
        get(t->right, x);
    }
    
    bool solve(TreeNode *t, TreeNode *s)
    {
        if(!t)
        {
            if(!s)
            {
                return 1;
            }
            return 0;
        }
        if(!s)
        {
            return 0;
        }
        
        if(s->val==t->val)
        {
            if(solve(t->left, s->left) && solve(t->right, s->right))
            {
                return 1;
            }
        }
        return 0;
    }
  
    //Function to check if S is a subtree of tree T.
    bool isSubtree(TreeNode* T, TreeNode* S) 
    {
        // Your code here
        if(!S)
        {
            return 1;
        }
        if(!T)
        {
            return 0;
        }
        ref.clear();
        get(T, S->val);
        for(int i=0;i<ref.size();i++)
        {
            if(solve(ref[i], S))
            {
                return 1;
            }
        }
        return 0;
    }
    
};