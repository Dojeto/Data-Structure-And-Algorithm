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
    void preorder(vector<int>& arr,TreeNode * root)
    {
        if(root == NULL)
            return;
        arr.push_back(root->val);
        preorder(arr,root->left);
        preorder(arr,root->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> arr;
        preorder(arr,root);
        return arr;
    }
};

// using stack

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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> arr;
        if(root == NULL)return arr;
        stack <TreeNode*> s;
        s.push(root);
        while(!s.empty())
        {
            TreeNode* temp;
            temp = s.top();
            s.pop();
            arr.push_back(temp->val);
            if(temp->right != NULL) s.push(temp->right);
            if(temp->left != NULL) s.push(temp->left);
        }
        return arr;
    }
};
