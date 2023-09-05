/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 * };
 *
 *************************************************************************/

int lengthOfLoop(Node *head) {
   Node* slow=head;
    Node* fast= head;
    while(fast && fast->next){
        slow= slow->next;
    fast= fast->next->next;
        if(fast==slow)
        {
             int cnt=1;
            slow=slow->next;
            while(slow!=fast){
                 slow=slow->next;
                cnt++;
            }
            return cnt;
        }
    }
        return 0;
        
}
