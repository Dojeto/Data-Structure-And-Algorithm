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
    void inorder(TreeNode* root,int &temp)
    {
        if(root==NULL)
            return;
        temp += root->val;
        inorder(root->left,temp);
        inorder(root->right,temp);
    }
    
    bool checkTree(TreeNode* root) {
        int x=0;
        inorder(root,x);
        if(root->val != x-root->val)
        {
            return false;
        }
        return true;
    }
};
