/*
Problem:
Given an array where elements are sorted in ascending order, convert it to a height balanced BST.

For this problem, a height-balanced binary tree is defined as a binary tree in which the depth of the two subtrees of every node never differ by more than 1.

*/


//Solution
#include <iostream>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return helper(nums,0,nums.size());
    }
    
    TreeNode* helper(vector<int>& nums, int start, int end)
    {
        if(start >= end) return NULL;
        int midIndex = (start + end)/2;
        TreeNode* root = new TreeNode(nums[midIndex]);
        root->left = helper(nums,start, midIndex);
        root->right = helper(nums,midIndex+1, end);
        return root;
    }
};

/*
Explanation:
 We have a sortedArrayToBST function and a helper function which builds the tree.  We will first pass the whole array into the helper function.  This will find the middle index of the array.
 The helper function will then create a new node of the middle index, and the left child will be grabbed from the left side of the array and the right child will be grabbed by the right side of the array.
 This will ensure the tree remains balanced since the array is sorted.
 
 This will continue recursively until the array is exhausted.  At this point, the tree will be a balanced BST.
 
*/
