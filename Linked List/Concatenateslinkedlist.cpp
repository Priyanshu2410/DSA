#include <iostream>

using namespace std;

struct node
{
    int data;
    node *next;
};

class priyanshu
{
private:
    node *head,*tail;
public:
    priyanshu()
    {
        head = NULL;
        tail = NULL;
    }

    void add_node(int n)
    {
        node *tmp = new node;
        tmp->data = n;
        tmp->next = NULL;

        if(head == NULL)
        {
            head = tmp;
            tail = tmp;
        }
        else
        {
            tail->next = tmp;
            tail = tail->next;
        }
    }

    node* gethead()
    {
        return head;
    }

    static void display(node *head)
    {
        if(head == NULL)
        {
            cout << "NULL" << endl;
        }
        else
        {
            cout << head->data << endl;
            display(head->next);
        }
    }

    static void concatenate(node *a,node *b)
    {
        if( a != NULL && b!= NULL )
        {
            if (a->next == NULL)
                a->next = b;
            else
                concatenate(a->next,b);
        }
        else
        {
            cout << "Either a or b is NULL\n";
        }
    }
};

int main()
{
    priyanshu a;
    a.add_node(1);
    a.add_node(2);
    priyanshu b;
    b.add_node(3);
    b.add_node(4);
    priyanshu::concatenate(a.gethead(),b.gethead());
    priyanshu::display(a.gethead());
    return 0;
}
