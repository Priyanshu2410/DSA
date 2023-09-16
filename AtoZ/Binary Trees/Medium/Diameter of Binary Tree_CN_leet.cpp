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
int fdiameter(TreeNode<int> *root ,int& diameter)
{
    if(root==NULL)
    {
        return 0;
    }
  
    int lh = fdiameter(root->left,diameter);
    int rh = fdiameter(root->right,diameter);
    diameter= max(diameter,lh+rh);
    return  1+max(lh,rh);
}
int diameterOfBinaryTree(TreeNode<int> *root){
	// Write Your Code Here.
    int diameter=0;
    fdiameter(root,diameter);
    return diameter;
}
