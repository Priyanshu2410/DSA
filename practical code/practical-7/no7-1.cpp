// write a program to construct binary search tree.
#include <iostream>
using namespace std;
#define COUNT 10
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void print2DUtil(Node *root, int space)
{
    if (root == NULL)
        return;

    // int COUNT;l
    space += COUNT;

    print2DUtil(root->right, space);

    cout << endl;
    for (int i = COUNT; i < space; i++)
        cout << " ";
    cout << root->data << "\n";

    print2DUtil(root->left, space);
}

void print2D(Node *root)
{
    print2DUtil(root, 0);
}

int main()
{
    int n;
    cout << "enter your base" << endl;
    cin >> n;
    struct Node *root = new Node(n);

    int a, b;
    cout << "Enter your second line element" << endl;
    cin >> a >> b;
    root->left = new Node(a);
    root->right = new Node(b);

    int choice;
    do
    {
        cout << "for enter left -> left 1)" << endl
             << "for enter left -> right 2)" << endl
             << "for enter right -> left 3)" << endl
             << "for enter right -> right 4)" << endl;

        cin >> choice;
        switch (choice)
        {
        case 1:
            int n;
            cout << "enter your number" << endl;
            cin >> n;
            root->left->left = new Node(n);
            break;
        case 2:
            int p;
            cout << "enter your number" << endl;
            cin >> p;
            root->left->right = new Node(p);

            break;
        case 3:
            int q;
            cout << "enter your number" << endl;
            cin >> p;
            root->right->left = new Node(p);

            break;
        case 4:
            int s;
            cout << "enter your number" << endl;
            cin >> p;
            root->right->right = new Node(s);

            break;
        default:
            cout << "wrong choice" << endl;
        }
    } while (choice < 5);

  
    print2D(root);

    return 0;
}