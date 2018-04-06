//
// Given a binary tree and a sum, find all root-to-leaf paths where each path's sum equals the given sum.
//
//
// For example:
// Given the below binary tree and sum = 22,
//
//               5
//              / \
//             4   8
//            /   / \
//           11  13  4
//          /  \    / \
//         7    2  5   1
//
//
//
// return
//
// [
//    [5,4,11,2],
//    [5,8,4,5]
// ]
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

    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<int> vec0;
        vector<vector<int>> vec1;
        findPaths(root, sum, vec0, vec1);
        return vec1;  
        
    }
    void findPaths(TreeNode* root, int sum, vector<int>& vec0, vector<vector<int> >& vec1) {
        if (!root)
            return;
        if (!root->left && !root->right)
        {
            if (sum == root->val)
            {
                vec0.push_back(root->val);
                vec1.push_back(vec0);
                vec0.pop_back();
            }
        }
        vec0.push_back(root->val);
        if (root->left)
            findPaths(root->left, sum - root->val, vec0, vec1);
        if (root->right)
            findPaths(root->right, sum - root->val, vec0, vec1);
        vec0.pop_back();
    }
};
