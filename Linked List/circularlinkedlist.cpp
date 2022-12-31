
#include <iostream>
using namespace std;

struct Node {
  int data;
  struct Node* next;
};

struct Node* addToEmpty(struct Node* last, int data) {
  if (last != NULL) return last;

  struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

  newNode->data = data;

  last = newNode;

  last->next = last;

  return last;
}

struct Node* addFront(struct Node* last, int data) {
  if (last == NULL) return addToEmpty(last, data);

  struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

  newNode->data = data;

  newNode->next = last->next;

  last->next = newNode;

  return last;
}

struct Node* addEnd(struct Node* last, int data) {
  if (last == NULL) return addToEmpty(last, data);

  struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

  newNode->data = data;

  newNode->next = last->next;

  last->next = newNode;

  last = newNode;

  return last;
}



void deleteNode(Node** last, int key) {
  if (*last == NULL) return;

  if ((*last)->data == key && (*last)->next == *last) {
  free(*last);
  *last = NULL;
  return;
  }

  Node *temp = *last, *d;

  if ((*last)->data == key) {
  while (temp->next != *last) temp = temp->next;

  temp->next = (*last)->next;
  free(*last);
  *last = temp->next;
  }

  while (temp->next != *last && temp->next->data != key) {
  temp = temp->next;
  }

  if (temp->next->data == key) {
  d = temp->next;
  temp->next = d->next;
  free(d);
  }
}
void insertatSpecfic(Node** last,int num,int pos)
{
    struct Node *newnode,*curnode;
    int i;
    if(*last==NULL)
    {
        cout<<"List is empty"<<endl;
        
    }
    else{
        newnode=(struct Node*)malloc(sizeof(struct Node));
        newnode->data=num;
        curnode=*last;
        for(i=0;i<pos-3;i++)
        {
            curnode=curnode->next;
        }
        newnode->next=curnode->next;
        curnode->next=newnode;
    }
}

void print(struct Node* last) {
  struct Node* p;

  if (last == NULL) {
  cout << "The list is empty" << endl;
  return;
  }

  p = last->next;

  do {
  cout << p->data << " ";
  p = p->next;

  } while (p != last->next);
  cout<<endl;
}

int main() {
  struct Node* last = NULL;

//   last = addToEmpty(last, 6);
  last = addFront(last, 2);
  last = addFront(last, 5);
//   last = addFront(last, 7);
//   last = addEnd(last, 8);


//   print(last);

//   deleteNode(&last, 8);
//   cout << endl;

//   print(last);

//   deleteNode(&last, 2);
//   cout << endl;

//     print(last);
insertatSpecfic(&last,10,3);
print(last);




    int choice;
    do
    {
    cout<<"enter your choice"<<endl;
    cout<<"choice 1 for insert at front"<<endl<<"choice 2 for insert at end"<<endl<<"choice 3 for deleate"<<endl;
    
    cin>>choice;
    switch(choice)
     {
  case 1:
        int n;
        cout<<"enter your number"<<endl;
        cin>>n;
        last = addFront(last, n);
         print(last);
    break;
  case 2:
        int a;
        cout<<"enter your number"<<endl;
        cin>>a;
        last = addEnd(last, a);
         print(last);

    break;
  case 3:
        int b;
        cout<<"enter your number for deleate"<<endl;
        cin>>b;
        deleteNode(&last, b);
         print(last);

    break;
  default:
        cout<<"wrong choice"<<endl;
    }
    } while (choice<4);

    return 0;
}