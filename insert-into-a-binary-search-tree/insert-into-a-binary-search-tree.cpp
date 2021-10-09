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
    TreeNode* insertIntoBST(TreeNode* node, int val) 
    {
        if (!node) {
			TreeNode *newNode = new TreeNode(val);
			return newNode;
		}
		if (val < node->val) {
			node->left = insertIntoBST(node->left, val);
		}
		else {
			node->right = insertIntoBST(node->right, val);
		}
		return node;
    }
};