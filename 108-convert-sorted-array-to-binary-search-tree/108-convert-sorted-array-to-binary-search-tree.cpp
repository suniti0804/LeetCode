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
    TreeNode* arraytoBST(vector<int>& nums, int start, int end)
    {
        if(start > end)
            return NULL;
        
        int mid = (start + end) / 2;
        TreeNode* root = new TreeNode(nums[mid]);
        
        root -> left = arraytoBST(nums, start, mid - 1);
        root -> right = arraytoBST(nums, mid + 1, end);
        
        return root;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) 
    {
        return arraytoBST(nums, 0, nums.size() - 1);
    }
};