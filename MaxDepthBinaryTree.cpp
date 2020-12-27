/*
Problem:
Given the root of a binary tree, return its maximum depth.

A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.
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
    int maxDepth(TreeNode* root) {
        int leftDepth = 0;
        int rightDepth = 0;
        
        if(root == NULL)
        {
            return 0;
        }
        
        leftDepth+= maxDepth(root->left);
        rightDepth+= maxDepth(root->right);
        
        if(leftDepth > rightDepth)
        {
            return leftDepth + 1;
        }
        
        else
        {
            return rightDepth + 1;
        }
        
    }
};

/*
Explanation:

We use recursion to find the max depth.  If maxDepth function gets passed the root, it will return.  Otherwise, it will recursively go down the left/right children of the node to determine which is greater.

Once the recursion is complete, it will return the greater of leftDepth and rightDepth since that will represent the maxDepth.

*/
