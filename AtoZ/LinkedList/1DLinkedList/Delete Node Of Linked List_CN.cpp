/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node *deleteLast(Node *list){
    if(!list)return NULL;
    Node*temp=list;
    Node*prev=NULL;

    while(temp->next){
        prev=temp;
        temp=temp->next;
    }
    prev->next=NULL;

    delete temp;

    return list;
}