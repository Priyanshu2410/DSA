/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int data;
 *		Node *next;
 *		Node() : data(0), next(nullptr) {};
 *		Node(int x) : data(x), next(nullptr) {}
 *		Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node* segregateEvenOdd(Node* head)

{

    Node* temp=head;
    vector<int> even,odd;
    while(temp!=NULL)
    {
        if((temp->data)%2==0)
        {
            even.push_back(temp->data);
        }
        else{
            odd.push_back(temp->data);
        }
        temp=temp->next;
    }
    Node* dummy=head;
    for(int i=0;i<even.size();i++)
    {
        head->data=even[i];
        head=head->next;
    }
    for(int i=0;i<odd.size();i++)
    {
        head->data=odd[i];
        head=head->next;
    }
    return dummy;
}