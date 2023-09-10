/**
 * Definition of doubly linked list:
 * class Node {
 * public:
 *      int data;
 *      Node *prev;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next, Node *prev) {
 *          this -> data = data;
 *          this -> prev = prev;
 *          this -> next = next;
 *      }
 * };
 *
 *************************************************************************/

vector<pair<int, int>> findPairs(Node* head, int k)
{
     vector<pair<int,int>>ans;
    Node *start=head;
    Node *end=head;
    while(end->next!=NULL){
        end=end->next;
    }
    while(start<end){

        if(start->data+end->data==k){

            pair<int,int>p;

            p.first=start->data;

            p.second=end->data;

            ans.push_back(p);

            start=start->next;

            end=end->prev;

        }else if(start->data+end->data<k){

            start=start->next;
        }else {
            end=end->prev;
        }

    }

    return ans;
}
