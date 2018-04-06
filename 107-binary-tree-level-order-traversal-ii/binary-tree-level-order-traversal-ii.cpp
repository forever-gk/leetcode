// Given a binary tree, return the bottom-up level order traversal of its nodes' values. (ie, from left to right, level by level from leaf to root).
//
//
// For example:
// Given binary tree [3,9,20,null,null,15,7],
//
//     3
//    / \
//   9  20
//     /  \
//    15   7
//
//
//
// return its bottom-up level order traversal as:
//
// [
//   [15,7],
//   [9,20],
//   [3]
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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> vec;
        dfs(root, 0, vec);
        return {vec.rbegin(), vec.rend()};
    }
    void dfs(TreeNode* root, int level, vector<vector<int>>& vec)
    {
        if (!root)
            return;
        if (level == vec.size())
            vec.push_back(vector<int>());
        vec[level].push_back(root->val);
        dfs(root->left, level + 1, vec);
        dfs(root->right, level + 1, vec);
    }
    
};
