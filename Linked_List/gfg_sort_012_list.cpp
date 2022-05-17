#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        if(head==NULL || head->next==NULL) return head;
        int a[3]={0};
        Node* temp=head;
        while(temp){
            a[temp->data]++;
            temp=temp->next;
        }
        
        temp=head;
        int i=0;
        while(temp!=NULL){
            if(a[i]==0) i++;
            else{
                temp->data=i;
                a[i]--;
                temp=temp->next;
            }
        }
        return head;
    }
};