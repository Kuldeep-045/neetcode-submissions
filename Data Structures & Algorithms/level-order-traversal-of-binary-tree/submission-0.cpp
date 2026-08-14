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
        vector<vector<int>>res;
        helper(root,res,0);
       
        return res;
    }
    void helper(TreeNode* root, vector<vector<int>>&res, int k){
        if(!root)return;
        if(res.size()==k){
            res.push_back(vector<int>());
        }
        res[k].push_back(root->val);
        helper(root->left,res,k+1);
        helper(root->right,res,k+1);
    }

};
