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
        this->next = NULL;
    }
    ~Nodes()
    {
        int value=this ->data;
        if(this->next!=NULL)
        {
            delete next;
            this ->next=NULL;
        }
        cout<<"memory is free for node with data"<<value<<endl;
    }
};

void insertatHead(Nodes* &head, int d)
{
    Nodes* temp = new Nodes(d);
    temp->next = head; 
    head = temp;
}

void insertattail(Nodes* &tail,int d)
{
    
    Nodes* temp = new Nodes(d);
    tail->next = temp; 
    tail = temp;
}

void print(Nodes* &head)
{
    Nodes* temp = head;

    while(temp != NULL )
    {
        cout << temp -> data <<" ";
        temp = temp -> next;
    }
    cout<<endl;
}
void deletenord(int position,Nodes* &head)
{
    if(position==1)
    {
        Nodes* temp=head;
        head = head ->next;
        delete temp;
    }
    else
    {
        Nodes* curr =head;
        Nodes* prev =NULL;

        int count=1;
        while(count<position)
        {
            prev=curr;
            curr=curr->next;
            count++;
        }

        prev ->next=curr ->next;
        curr ->next=NULL;
        delete curr;
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

    Nodes* tail= node1;

    insertattail(tail, 12);
    print(head);

    insertattail(tail, 15);
    print(head);

    insertattail(tail, 22);
    print(head);
    // insertatHead(head, 12);
//    print(head);

    // insertatHead(head, 15);
//    print(head);

    deletenord(4,head);
    print(head);
    return 0;
}