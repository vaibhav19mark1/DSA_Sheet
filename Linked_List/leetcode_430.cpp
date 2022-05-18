#include<iostream>
using namespace std;

class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};

class Solution {
public:
    Node* flatten(Node* head) {
        Node* h=head;
        while(h){
            if(h->child){
                Node* next=h->next;
                h->next=h->child;
                h->next->prev=h;
                h->child=NULL;
                Node* p=h->next;
                while(p->next) p=p->next;
                p->next=next;
                if(next) next->prev=p;
            }
            h=h->next;
        }
        return head;
    }
};