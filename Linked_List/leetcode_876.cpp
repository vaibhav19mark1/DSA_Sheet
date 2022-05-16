#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if(head->next==NULL) return head;
        ListNode *slow=head,*fast=head;
        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        if(fast->next) return slow->next;
        return slow;
    }
};

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if(head->next==NULL) return head;
        ListNode* temp=head;
        int c=1;
        while(temp->next){
            c++;
            temp=temp->next;
        }
        temp=head;
        int i=0;
        while(i<c/2){
            temp=temp->next;
            i++;
        }
        return temp;
    }
};