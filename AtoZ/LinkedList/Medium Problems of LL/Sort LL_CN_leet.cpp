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
#include <bits/stdc++.h>
Node* sortList(Node* head){
    // Write your code here.
     if(!head)return nullptr;
        vector<int> arr;
        Node* temp = head;
        while(temp){
            arr.push_back(temp->data);
            temp=temp->next;
        }
        sort(arr.begin(),arr.end());
         Node* dummy = new Node(arr[0]);
         Node* tail=dummy;
        for(int i=1; i<arr.size(); i++){
            Node* temp = new Node(arr[i]);
            tail->next=temp;
            tail=temp;
        }
        return dummy;
}
