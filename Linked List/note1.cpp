#include <iostream>

using namespace std;

class Nodes
{
public:
    int data;
    Nodes *next;

    // construcutor

    Nodes(int data)
    {
        this->data = data;
        this->next = next;
    }
};

void insertatHead(Nodes* &head, int d)
{
    Nodes* temp = new Nodes(d);
    temp->next = head;
    head = temp;
}

void print(Nodes* &head)
{
    Nodes* temp = head;

    while(temp != NULL )
    {
        cout << temp -> data <<" ";
        temp = temp -> next;
    }
}
int main()
{
    // created a new node
    Nodes* node1 = new Nodes(10);
    //  cout<< node1 ->data<<endl;
    // cout<< node1 ->next<<endl;

    // head pointed to node
    Nodes* head = node1;
   print(head);

    insertatHead(head, 12);
//    print(head);

    insertatHead(head, 15);
   // print(head);
    return 0;
}