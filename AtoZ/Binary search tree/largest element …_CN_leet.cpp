/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode
    {
    public:
        T data;
        TreeNode<T> *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(T x) : data(x), left(NULL), right(NULL) {}
        TreeNode(T x, TreeNode<T> *left, TreeNode<T> *right) : data(x), left(left), right(right) {}
    };

************************************************************/
int a;
void inorder(TreeNode<int> *root, int& k){
    if(root==NULL)return;
    inorder(root->left, k);
    if(--k == 0){   
        a = root->data;
        return;
    }
    inorder(root->right, k);
}

int kthSmallest(TreeNode<int> *root, int k)
{
    inorder(root, k);
    return a;
}