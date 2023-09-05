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

Node* reverse(Node* ptr) {
    Node* pre=NULL;
    Node* nex=NULL;
    while(ptr!=NULL) {
        nex = ptr->next;
        ptr->next = pre;
        pre=ptr;
        ptr=nex;
    }
    return pre;
}

bool isPalindrome(Node* head) {
    if (head == NULL || head->next == NULL) return true;
        
    Node* slow = head;
    Node* fast = head;
        
    while (fast->next != NULL && fast->next->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
        
    slow->next = reverse(slow->next);
    slow = slow->next;
    Node* dummy = head;
        
    while (slow != NULL) {
        if (dummy->data != slow->data) return false; 
        dummy = dummy->next;
        slow = slow->next;
    }
    return true;
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

    ListNode* reverse(ListNode* ptr) {
    ListNode* pre=NULL;
    ListNode* nex=NULL;
    while(ptr!=NULL) {
        nex = ptr->next;
        ptr->next = pre;
        pre=ptr;
        ptr=nex;
    }
    return pre;
}

    bool isPalindrome(ListNode* head) {
        if (head == NULL || head->next == NULL) return true;
        
    ListNode* slow = head;
    ListNode* fast = head;
        
    while (fast->next != NULL && fast->next->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
        
    slow->next = reverse(slow->next);
    slow = slow->next;
    ListNode* dummy = head;
        
    while (slow != NULL) {
        if (dummy->val != slow->val) return false; 
        dummy = dummy->next;
        slow = slow->next;
    }
    return true;
    }
};