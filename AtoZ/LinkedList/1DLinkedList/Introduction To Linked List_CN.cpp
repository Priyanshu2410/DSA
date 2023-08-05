/**
 * Definition of linked list
 * class Node {
 *
 * public:
 *     int data;
 *     Node* next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node* next) : data(x), next(next) {}
 * };
 */

Node *constructLL(vector<int> &arr)
{

    Node *newNode = new Node(arr[0]);

    Node *head = newNode;

    int n = arr.size();

    for (int i = 1; i < n; i++)
    {

        newNode->next = new Node(arr[i]);

        newNode = newNode->next;
    }

    return head;
}