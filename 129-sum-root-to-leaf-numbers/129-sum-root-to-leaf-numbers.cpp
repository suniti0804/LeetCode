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
    
    //iterative dfs
   /* int sumNumbers(TreeNode* root) 
    {
        stack<pair<TreeNode*, int>> st;      // {node, cur}
        st.push({root, 0});
        int sum = 0;
        
        while(!st.empty()) 
        {
            auto curr=st.top();
            st.pop();
            curr.second=curr.second*10+root->val;
            if(!curr.first->left&&!curr.first->right) 
                sum+=curr.second;  // reached leaf node
            if(curr.first->right) 
                s.push({curr.first->right, curr});
            if(curr.first-> left) 
                s.push({curr.first-> left, curr});
        }
        return sum;
    }  */
    
    //preorder dfs traversal
    int dfs(TreeNode* root, int curr) 
    {
        if(!root) 
            return 0;
        
        curr=curr*10+root->val;                
       
        if(!root->left&&!root->right)  
            return curr;
        
        return dfs(root->left, curr)+dfs(root->right, curr);   
    }  
    
    int sumNumbers(TreeNode* root) 
    {
        return dfs(root, 0);
    }
    
};