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
   int sumNumbers(TreeNode* root) 
    {
        stack<pair<TreeNode*, int>> st;      // {node, cur}
        st.push({root, 0});
        int sum = 0;
        
        while(!st.empty()) 
        {
            auto curr=st.top();
            st.pop();
            
            TreeNode* node=curr.first;
            int t=curr.second;
            
            t=t*10+node->val;
            
            if(!node->left&&!node->right) 
                sum+=t;  // reached leaf node
            
            if(node->right) 
                st.push({node->right, t});
            
            if(node->left) 
                st.push({node->left, t});
        }
       
        return sum;
    }  
    
    //preorder dfs traversal
    /*int dfs(TreeNode* root, int curr) 
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
    }  */
    
};