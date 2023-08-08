/*
 * Definition for doubly-linked list.
 * class Node
 * {
 * public:
 *    int data;
 *    Node *next, *prev;
 *    Node() : data(0), next(nullptr), prev(nullptr) {}
 *    Node(int x) : data(x), next(nullptr), prev(nullptr) {}
 *    Node(int x, Node *next, Node *prev) : data(x), next(next), prev(prev) {}
 * };
 */

Node* constructDLL(vector<int>& arr) {
     Node*temp=new Node(arr[0]);

    Node*head=temp;

    temp->prev=head;

    for(int i=1;i<arr.size();i++){

        Node*t=temp;

      t=new Node(arr[i]);

      temp->next=t;

      t->prev=temp;

      temp=t;

 

    }

    return head;
}
