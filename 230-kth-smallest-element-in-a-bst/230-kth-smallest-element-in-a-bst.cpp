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

class Solution{
    public:
    
   int kthSmallest(TreeNode* root, int k)
    {
        stack<TreeNode*> st;
        while(!st.empty()||root)
        {
            while(root)
            {
                st.push(root);
                root=root->left;
            }
            
            root=st.top();
            st.pop();
            
            k--;
            if(k==0)
                return root->val;
            
            root=root->right;
        }
        
        return -1;
    }  /*
    
    
    int res;
    
public:
     void in(TreeNode* head, int& k)
    {
        if(head == NULL)
            return;
        in(head -> left, k);
        if(--k==0)
             res=head->val;
        in(head -> right, k);
    }
    
    int kthSmallest(TreeNode* root, int k) 
    {
        in(root, k);
        return res;
    }  */
}; 