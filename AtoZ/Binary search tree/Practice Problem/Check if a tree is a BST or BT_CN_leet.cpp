/**********************************************************
	Following is the Binary Tree Node class structure

	template <typename T>
	class BinaryTreeNode {
    	public : 
    	T data;
    	BinaryTreeNode<T> *left;
    	BinaryTreeNode<T> *right;

    	BinaryTreeNode(T data) {
        	this -> data = data;
        	left = NULL;
        	right = NULL;
    	}
	};

***********************************************************/

#include<bits/stdc++.h>

bool isValid(BinaryTreeNode<int>* root, int Minval, int Maxval) {

    if (root == NULL) return true;
    if (root->data >= Maxval || root->data <= Minval) return false;
    return isValid(root->left, Minval, root->data) && isValid(root->right, root->data, Maxval);

}

bool isBST(BinaryTreeNode<int> *root) {

    int Minval = INT_MIN; 
    int Maxval = INT_MAX; 
    return isValid(root, Minval, Maxval);

}