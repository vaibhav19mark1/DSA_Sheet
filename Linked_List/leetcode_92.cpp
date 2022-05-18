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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head->next==NULL || left==right) return head;
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode *prev=dummy,*curr=head;
        for(int i=1;i<left;i++){
            prev=prev->next;
            curr=curr->next;
        }
        ListNode* pre=NULL;
        for(int i=0;i<right-left+1;i++){
            ListNode* temp=curr->next;
            curr->next=pre;
            pre=curr;
            curr=temp;
        }
        prev->next->next=curr;
        prev->next=pre;
        return dummy->next;
    }
};