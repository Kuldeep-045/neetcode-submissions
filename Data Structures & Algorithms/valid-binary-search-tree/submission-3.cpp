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
    bool helper(TreeNode* root,int &prevVal){
        if(!root)return true;
        bool left= helper(root->left,prevVal);
        if(root->val<=prevVal)return 0;
        prevVal=root->val;
        bool right= helper(root->right,prevVal);
        return left and right;
    }
public:
    bool isValidBST(TreeNode* root,TreeNode* prev=NULL) {
        int k=INT_MIN;
       return helper(root, k);
    }
};
