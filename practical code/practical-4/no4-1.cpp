// Write a program for single linked list for the following operations:
// 1. Count the number of nodes in a given linked list
// 2. Delete the desired node from linked list
// 3. Insert the new node after the desired node into the linked list
// 4. Create a new list by reversing the list
// 5. Concatenates two linked list


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
        this -> data = data;
        this -> next = NULL;
    }

    // destructor


    ~Nodes()
    {
        int value=this ->data;
        if(this -> next!=NULL)
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
    temp -> next = head; 
    head = temp;
}

void insertattail(Nodes* &tail,int d)
{
    
    Nodes* temp = new Nodes(d);
    tail -> next = temp; 
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
    int b;
    cout<<"enter your first element to insert"<<endl;
    cin>>b;
    // created a new node
    Nodes* node1 = new Nodes(b);
    //  cout<< node1 ->data<<endl;
    // cout<< node1 ->next<<endl;

    // head pointed to node
    Nodes* head = node1;
//    print(head);

    Nodes* tail= node1;


    int choice;
    do
    {
    cout<<"enter your choice"<<endl;
    cout<<"choice 1 for insert"<<endl<<"choice 2 for deleate"<<endl;
    
    cin>>choice;
    switch(choice)
     {
  case 1:
        int n;
        cout<<"enter your number"<<endl;
        cin>>n;
         insertattail(tail, n);
         print(head);
    break;
  case 2:
        int a;
        cout<<"enter your position where you deleate your element"<<endl;
        cin>>a;
     deletenord(a,head);
      print(head);

    break;
  default:
        cout<<"wrong choice"<<endl;
    }
    } while (choice<2);

    return 0;
}