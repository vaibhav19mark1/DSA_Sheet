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
    ListNode* reverseList(ListNode* head){
        if(head==NULL || head->next==NULL) return head;
        ListNode* prev=NULL;
        ListNode* curr=head;
        
        while(curr){
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        slow=slow->next;
        slow=reverseList(slow);
        while(slow){
            if(slow->val!=head->val) return false;
            slow=slow->next;
            head=head->next;
        }
        return true;
    }
};