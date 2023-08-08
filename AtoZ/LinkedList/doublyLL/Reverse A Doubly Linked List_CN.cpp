/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next,*prev;
    Node()
    {
        this->data = 0;
        next = NULL;
        prev= NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
        this->prev= NULL;
    }
    Node(int data, Node* next, Node *prev)
    {
        this->data = data;
        this->next = next;
        this->prev= prev;
    }
};

*/

Node* reverseDLL(Node* head)
{   
     Node* prev  = NULL;

    Node* curr = head;

    Node* next = NULL;    
    while(curr != NULL)
    {
        next = curr->next;

        curr->next = prev;

        curr->prev = next;

        prev = curr;

        curr = next;

    }

    head = prev;    
}

