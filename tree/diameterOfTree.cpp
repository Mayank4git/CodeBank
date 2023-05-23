/*

Given the root of a binary tree, return the length of the diameter of the tree.

The diameter of a binary tree is the length of the longest path between any two nodes in a tree. This path may or may not pass through the root.

The length of a path between two nodes is represented by the number of edges between them.

*/

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
      int height(TreeNode* node){

        if(node == NULL) return 0;

        int h1 = height(node->left);
        int h2 = height(node->right);

        return max(h1,h2)+1;

    }

    int dia(TreeNode* node){
        if(node == NULL) return 0;

        int l = height(node->left);
        int r = height(node->right);

        int op1 = dia(node->left);
        int op2 = dia(node->right);
        int op3 = l+r+1;

        return max(op1,max(op2,op3));

    }
    int diameterOfBinaryTree(TreeNode* root) {

        int ans = dia(root); // ans gives no. of nodes , but in this ques it is asked no . of edges
        return ans-1;
       
    }
};