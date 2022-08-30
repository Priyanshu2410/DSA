#include<iostream>
using namespace std;

class Nodes{
    public:
        int data;
        Nodes* next;

        //construcutor

        Nodes(int data)
        {
            this -> data=data;
            this -> next=next;
        }
};

int main()
{
    Nodes*  node1 = new Nodes(10);
    cout<< node1 ->data<<endl;
    cout<< node1 ->next<<endl;

    return 0;
}