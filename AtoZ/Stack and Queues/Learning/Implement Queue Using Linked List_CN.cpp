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
 * 
 * Definition of Queue
 * struct Queue {
 *   Node* front;
 *   Node* rear;
 *   void push(int);
 *   int pop();
 *   
 *   Queue() {
 *       front = rear = NULL;
 *   }
 * };
 */
 Node *tail=new Node();

Node *head=new Node(0,tail);

Node *top=NULL;

void Queue::push(int x) {

    // Write Your Code Here

    Node *newnode=new Node(x,tail);

    if(top==NULL){

        head->next=newnode;

    }

    else{

        top->next=newnode;

    }

    top=newnode;

}

 

int Queue::pop() {

    // Write Your Code Here

    Node *t=head->next;

    if(top==NULL || t==tail){

        return -1;

    }

    else{

        head=t;

        return t->data;

    }

}