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

Node* reverseLinkedList(Node *head)
{
    Node *newHead = NULL;
        while (head != NULL) {
            Node *next = head->next;
            head->next = newHead;
            newHead = head;
            head = next;
        }
        return newHead;
}
