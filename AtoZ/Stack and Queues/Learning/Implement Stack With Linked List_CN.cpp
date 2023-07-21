/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/

class Stack

{

    Node* head;

    int ind;

 

public:

    Stack()

    {
        head = NULL;
        ind = 0;
    }
    int getSize()
    {

        return ind;
    }

    bool isEmpty()

    {
            return ind == 0 || head == nullptr;
    }

 

    void push(int data)

    {
 
        Node* n = new Node (data);

        n-> next = head;

        head = n;

        ind++;

    }

 

    void pop()

    {

        if (ind != 0){

            Node* newHead = head-> next;

            head-> next = nullptr;

            delete head;

            head = newHead;

            ind--;

       }

       else return;

    }

 

    int getTop()

    {
        if (ind > 0){
            return head-> data;

        }
        else return -1;

    }

};