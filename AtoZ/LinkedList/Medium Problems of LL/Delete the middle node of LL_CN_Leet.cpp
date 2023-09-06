/*
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
*/

Node* deleteMiddle(Node* head){
     if(head==NULL|| head->next==NULL)
    return NULL;
    Node*fast=head,*slow=head,*prev=NULL;
    while(fast&& fast->next){
        fast=fast->next->next;
        prev=slow;
        slow=slow->next;
    }
    prev->next=slow->next;
    slow->next=NULL;
    delete slow;
    return head;
}




/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
         if(head==NULL|| head->next==NULL)
    return NULL;
    ListNode*fast=head,*slow=head,*prev=NULL;
    while(fast&& fast->next){
        fast=fast->next->next;
        prev=slow;
        slow=slow->next;
    }
    prev->next=slow->next;
    slow->next=NULL;
    delete slow;
    return head;
    }
};