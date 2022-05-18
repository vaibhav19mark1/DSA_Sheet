#include<iostream>
#include<stack>
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
    void reorderList(ListNode* head) {
        if(head->next==NULL) return;
        ListNode *slow=head,*fast=head,*curr=head,*temp=NULL;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        stack<ListNode*> s;
        while(slow){
            s.push(slow);
            slow=slow->next;
        }
        while(!s.empty()){
            ListNode* top=s.top();
            s.pop();
            if(curr==top) break;
            temp=curr->next;
            curr->next=top;
            top->next=temp;
            curr=temp;
        }
        curr->next=NULL;
    }
};