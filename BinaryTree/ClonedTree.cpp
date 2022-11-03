/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* ans;
    TreeNode* preorder(TreeNode* original,TreeNode* cloned,TreeNode* target)
    {
        if(cloned == NULL)
            return cloned;
        if(cloned->val == target->val)
        {
            ans = cloned;
        }
        preorder(original,cloned->left,target);
        preorder(original,cloned->right,target);
        return ans;
    }
    
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        return preorder(original,cloned,target);
        // return target;
    }
};
