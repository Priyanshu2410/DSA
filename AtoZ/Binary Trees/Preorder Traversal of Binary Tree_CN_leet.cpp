/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
#include<bits/stdc++.h>
vector<int> preOrder(TreeNode<int> * root){
    // Write your code here.
   vector<int>ans;
    stack<TreeNode<int> *>s;
    s.push(root);
    while(!s.empty())
    {
        TreeNode<int> *x=s.top();
        s.pop();
        ans.push_back(x->data);
        if(x->right)s.push(x->right);
        if(x->left)s.push(x->left);
    }
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
 #include<bits/stdc++.h>
class Solution {
public:
   void preorder(TreeNode* root,vector<int> &ans){
         if(root==NULL)return;
         ans.push_back(root->val);
         preorder(root->left,ans);
         preorder(root->right,ans);
}
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        preorder(root,ans);
        return ans;
    }
};