/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode
    {
    public:
        T val;
        TreeNode<T> *left, *right;
        TreeNode() : val(0), left(NULL), right(NULL) {}
        TreeNode(T x) : val(x), left(NULL), right(NULL) {}
        TreeNode(T x, TreeNode<T> *left, TreeNode<T> *right) : val(x), left(left), right(right) {}
    };


************************************************************/

TreeNode<int>* insertionInBST(TreeNode<int>* root, int val)
{
    // Write your code here.
        if(root==NULL)
    {
        return new TreeNode<int>(val);
    }
    TreeNode<int>* curr= root;
    while(true)
    {
        if(curr->val <=val)
        {
            if(curr->right!=NULL) curr=curr->right;
            else{
                curr->right= new TreeNode<int>(val);
                break;
            }
        }
        else{
            if(curr->left!=NULL) curr=curr->left;
            else{
                curr->left= new TreeNode<int>(val);
                break;
            }
        }
    }

    return root;
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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
            if(root==NULL)
    {
        return new TreeNode(val);
    }
    TreeNode* curr= root;
    while(true)
    {
        if(curr->val <=val)
        {
            if(curr->right!=NULL) curr=curr->right;
            else{
                curr->right= new TreeNode(val);
                break;
            }
        }
        else{
            if(curr->left!=NULL) curr=curr->left;
            else{
                curr->left= new TreeNode(val);
                break;
            }
        }
    }

    return root;
    }
};