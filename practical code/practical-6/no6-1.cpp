// Write a program to implement doubly linked list for the following operations:
// 1. Insert a new node after the desired node
// 2. Delete the desired note 
// 3. Display the nodes of doubly linked list


#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int d){
        this->data=d;
        this->next=NULL;
        this->prev=NULL;
    }
};

void print(Node* head)
{
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int getlenght(Node* head)
{
    int len=0;
     Node* temp=head;
    while(temp!=NULL){
        // cout<<temp->data<<" ";
        len++;
        temp=temp->next;
    }
    // cout<<endl;
    return len;
}
void insertAthead(Node* &head,int d)
{
    Node* temp=new Node(d);
    temp ->next=head;
    head ->prev=temp;
    head=temp;

}

void insertAttail(Node* &tail,int d)
{
    Node* temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}

int main()
{
    Node* node1 = new Node(10);
    Node* head =node1;
    Node* tail=node1;
    print(head);
    // cout<<getlenght(head)<<endl;
    insertAthead(head,11);
    print(head);
    insertAthead(head,24);
    print(head);
    insertAthead(head,21);
    print(head);
    insertAttail(tail,15);
    print(head);
    return 0;
}