/************************************************************

    Following is the BinaryTreeNode class structure

    template <typename T>
    class BinaryTreeNode {
       public:
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
int findMaxPathSum(BinaryTreeNode<int> *root,int &maxi)
{
      if (root == NULL) return 0;

      int leftMaxPath = max(0, findMaxPathSum(root -> left, maxi));
      int rightMaxPath = max(0, findMaxPathSum(root -> right, maxi));
      int val = root -> data;
      maxi = max(maxi, (leftMaxPath + rightMaxPath) + val);
      return max(leftMaxPath, rightMaxPath) + val;
}
int maxPathSum(BinaryTreeNode<int> *root)
{
        int maxi = INT_MIN;
        findMaxPathSum(root, maxi);
        return maxi;
}