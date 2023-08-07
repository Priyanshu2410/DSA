/**
 * Definition of doubly linked list:
 *
 * struct Node {
 *      int value;
 *      Node *prev;
 *      Node *next;
 *      Node() : value(0), prev(nullptr), next(nullptr) {}
 *      Node(int val) : value(val), prev(nullptr), next(nullptr) {}
 *      Node(int val, Node *p, Node *n) : value(val), prev(p), next(n) {}
 * };
 *
 *************************************************************************/

Node * insertAtTail(Node *head, int k) {
    if(head==nullptr)
    {
        Node* New=new Node(k);
        return New;
    }

    Node* temp=head;

    while(temp->next!=nullptr)
    {
        temp=temp->next;
    }

    Node* NewNode=new Node(k);

    temp->next=NewNode;
    NewNode->prev=temp;
    return head;
}
