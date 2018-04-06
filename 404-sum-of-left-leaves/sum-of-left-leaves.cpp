// Find the sum of all left leaves in a given binary tree.
//
// Example:
//
//     3
//    / \
//   9  20
//     /  \
//    15   7
//
// There are two left leaves in the binary tree, with values 9 and 15 respectively. Return 24.
//
//


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
    int sumOfLeftLeaves(TreeNode* root) {
        if (root == nullptr)
            return 0;
        return mySumOfLeftLeaves(root->left, true) + mySumOfLeftLeaves(root->right, false);
    }
    int mySumOfLeftLeaves(TreeNode* root, bool isLeft)
    {
        if (root== nullptr)
            return 0;
        if (root->left == nullptr && root->right == nullptr && isLeft)
            return root->val;
        else 
            return mySumOfLeftLeaves(root->left, true) + mySumOfLeftLeaves(root->right, false);
    }
    
};
