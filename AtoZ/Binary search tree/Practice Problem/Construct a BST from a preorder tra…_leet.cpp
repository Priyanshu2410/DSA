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
    TreeNode* solve(vector<int>& preorder , int mini , int maxi , int &i){
        //base cases
        if(i >= preorder.size())
            return NULL;
        
        if(preorder[i] < mini || preorder[i] > maxi)
            return NULL;
        
        TreeNode* temp = new TreeNode(preorder[i++]);
        temp->left = solve(preorder , mini , temp->val , i);
        temp->right = solve(preorder , temp->val , maxi , i);
        
        return temp;
    }
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i = 0;
        return solve(preorder , INT_MIN , INT_MAX , i);
    }
};