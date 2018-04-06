// Given an array where elements are sorted in ascending order, convert it to a height balanced BST.
//
// For this problem, a height-balanced binary tree is defined as a binary tree in which the depth of the two subtrees of every node never differ by more than 1.
//
//
//
//
// Example:
//
// Given the sorted array: [-10,-3,0,5,9],
//
// One possible answer is: [0,-3,9,-10,null,5], which represents the following height balanced BST:
//
//       0
//      / \
//    -3   9
//    /   /
//  -10  5
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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
       TreeNode *root = NULL;
       sorted(root, nums.begin(), nums.end() - 1);
       return root;
    }
    void sorted(TreeNode *&root, vector<int>::iterator begin, vector<int>::iterator end){
        int size = end - begin + 1;
        if (size == 0)
            return;
        if (size == 1)
         {
            root = new TreeNode(*begin);
            return; 
         }

        if (size == 2)
        {
            root = new TreeNode(*begin);
            root->right = new TreeNode(*(begin + 1));
            return;
        }
        int mid  = size / 2;
        if (!root)
            root = new TreeNode(*(begin + mid));
        sorted(root->left, begin, begin + mid - 1);
        sorted(root->right, begin + mid + 1, end);
    }
};
