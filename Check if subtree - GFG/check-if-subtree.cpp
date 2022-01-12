// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Function to Build Tree
Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


 // } Driver Code Ends
/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution
{
  public:
    //Function to check if S is a subtree of tree T.
   bool substring(vector<int> A, vector<int> B)
    {
        int n = A.size(), m = B.size();
        int i = 0, j = 0;
        while (i < n && j < m) 
        {
     
            // If element matches
            // increment both pointers
            if (A[i] == B[j]) 
            {
     
                i++;
                j++;
                if (j == m)
                    return true;
            }
            // If not,
            // increment i and reset j
            else 
            {
                i = i - j + 1;
                j = 0;
            }
        }
     
        return false;
    }
    
    void preorder(Node* root, vector<int>& res)
    {
        if(root == NULL)
          {
              res.push_back(-1);
              return;
          }       
        res.push_back(root -> data);  
        preorder(root -> left, res);
        preorder(root -> right, res);
    }
    
    void inorder(Node* root, vector<int>& res)
    {
        /*It just indicate the NULL value such that order remain same.
          In Some cases if you didn't allocate proper mark for NULL 
          two different tree show same pre-order */
        if(root == NULL)
          {
              res.push_back(-1); //this is done to check pattern
              return;
          }        
        inorder(root -> left, res);
        res.push_back(root -> data);
        inorder(root -> right, res);
    }
    
    bool isSubTree(Node* T, Node* S) 
    {
        if(S == NULL)
          return true;
        if(T == NULL)
          return false;
          
        vector<int> inT, inS;
        inorder(T, inT);
        inorder(S, inS);
        
        vector<int> preT, preS;
        preorder(T, preT);
        preorder(S, preS);
        
        if(substring(inT, inS) && substring(preT, preS))
          return true;
        
        return false; 
    }    
};

// { Driver Code Starts.

int main() {
    int tc;
    scanf("%d ", &tc);
    while (tc--) {
        string strT, strS;
        getline(cin, strT);
        Node *rootT = buildTree(strT);
        getline(cin, strS);
        Solution obj;
        Node *rootS = buildTree(strS);
        cout << obj.isSubTree(rootT, rootS) << "\n";

    }
    return 0;
}  // } Driver Code Ends