/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
 void inorder(TreeNode* root,vector<int>&ans){
       if(root == NULL)return;

       inorder(root->left,ans);
       ans.push_back(root->data);
       inorder(root->right,ans);
   }

vector<int> getInOrderTraversal(TreeNode *root)
{
        vector<int>ans;
        inorder(root,ans);
        return ans;
}




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
 void inorder(TreeNode* root,vector<int>&ans){
       if(root == NULL)return;

       inorder(root->left,ans);
       ans.push_back(root->val);
       inorder(root->right,ans);
   }

    vector<int> inorderTraversal(TreeNode* root) {
         vector<int>ans;
        inorder(root,ans);
        return ans;
    }
};