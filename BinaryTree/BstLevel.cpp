  /* void printLevel(TreeNode* root,int level)
    {
        if(root == NULL)
            return;
        if(level == 1)
        {
            cout << root->val;
        }
        else
        {
            printLevel(root->left,level-1);
            printLevel(root->right,level-1);
        }
    } */



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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> arr;
        if(root==NULL)
            return arr;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            int size = q.size();
            vector<int> arr2;
            for(int i=0;i<size;i++)
            {
                TreeNode* node = q.front();
                arr2.push_back(node->val);
                if(node->left != NULL)
                {
                    q.push(node->left);
                }
                if(node->right != NULL)
                {
                    q.push(node->right);
                }
                q.pop();
            }
            arr.push_back(arr2);
        }
        return arr;
    }
};
