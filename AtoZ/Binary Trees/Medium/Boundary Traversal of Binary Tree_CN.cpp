/************************************************************

    Following is the Binary Tree node structure:

    template <typename T>
    class TreeNode
    {
    public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode()
        {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/

void leftTraversal(TreeNode<int> *root, vector<int> &ans){

    if(root==NULL){

        return;

    }

    if(root->left==NULL && root->right==NULL){

        return;

    }

    ans.push_back(root->data);

    leftTraversal(root->left, ans);

    if(root->left==NULL){

        leftTraversal(root->right, ans);

    }

}

void getleafNodes(TreeNode<int> *root, vector<int> &ans){

    if(root==NULL){

        return;

    }

    if(root->left==NULL && root->right==NULL){

       ans.push_back(root->data);  

        return;

    }

    if(root->left) getleafNodes(root->left,ans);

    if(root->right) getleafNodes(root->right,ans);

}

void RightTraversal(TreeNode<int> *root, vector<int> &ans){

    if(root==NULL){

        return;

    }

    if(root->left==NULL && root->right==NULL){

        return;

    }

    if(root->right) RightTraversal(root->right, ans);

    else

        RightTraversal(root->left, ans);

    

    ans.push_back(root->data);

}

vector<int> traverseBoundary(TreeNode<int> *root)

{

    vector<int> ans;

    if(root==NULL) return ans;

    ans.push_back(root->data);

    leftTraversal(root->left,ans); 

    getleafNodes(root->left,ans);

    getleafNodes(root->right,ans);

    RightTraversal(root->right, ans);

    return ans;

}
