/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) 
    {
        if (root == nullptr) 
            return {};
        queue<Node*> q;
        q.push(root);
        vector<vector<int>> ans;
        while (!q.empty()) 
        {
            ans.emplace_back();
            for (int i = q.size(); i >= 1; i--) 
            {
                Node* curr = q.front(); 
                q.pop();
                ans.back().push_back(curr->val);
                for (Node* child : curr->children) 
                    q.push(child);
                
            }
        }
        return ans;
    }
};