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
vector<int> levelOrder(TreeNode<int> * root){
    vector<int> ans;
    queue<TreeNode<int> *> q;
    q.push(root);
    while(!q.empty())
    {
        TreeNode<int> * currentNode = q.front();
        q.pop();
        ans.push_back(currentNode -> data);
        if(currentNode -> left)
            q.push(currentNode -> left);
        if(currentNode -> right)
            q.push(currentNode -> right);   
    }
    return ans;
}
