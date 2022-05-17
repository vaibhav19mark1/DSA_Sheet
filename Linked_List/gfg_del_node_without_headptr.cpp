#include<iostream>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}*head;

class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del)
    {
       if(del==NULL) return;
       del->data=del->next->data;
       Node* node=del->next;
       del->next=node->next;
       delete node;
    }

};