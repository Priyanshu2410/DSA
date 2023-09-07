/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

#include<bits/stdc++.h>

Node *addOne(Node *head)
{
    stack<Node*> st;
    Node* temp = head;
    while(temp){
        st.push(temp);
        temp = temp->next;
    }
    while(!st.empty()){
        int top = st.top()->data;
        if(top<9){
            st.top()->data++;
            return head;
        }
        else{
            st.top()->data = 0;
            st.pop();
        }
    }
        Node* node = new Node(1);
        node->next = head;
        return node;
    return head;
}

