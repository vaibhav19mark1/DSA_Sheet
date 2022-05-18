#include<iostream>
#include<unordered_map>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*,Node*> m;
        Node* newHead=head;
        while(newHead){
            m[newHead]=new Node(newHead->val);
            newHead=newHead->next;
        }
        newHead=head;
        while(newHead){
            m[newHead]->next=m[newHead->next];
            m[newHead]->random=m[newHead->random];
            newHead=newHead->next;
        }
        return m[head];
    }
};