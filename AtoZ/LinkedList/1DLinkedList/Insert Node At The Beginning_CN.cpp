/**
 * Definition of linked list
 * class Node {
 *
 * public:
 *     int data;
 *     Node* next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node* next) : data(x), next(next) {}
 * };
 */

Node *insertAtFirst(Node *list, int newValue) {
  Node *temp =new Node(); // creation of temp node and storing the newValue data

  temp->data = newValue; // storing the newValue data in the temp data

  temp->next = list; // giving the address of list to next

  list = temp; // not list beginning will be the temp

  return list;
}