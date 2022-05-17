#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// Iterative Solution
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;
        ListNode* ans=list1;
        if(list1->val>list2->val){
            ans=list2;
            list2=list2->next;
        }
        else list1=list1->next;
        ListNode* curr=ans;
        while(list1 && list2){
            if(list1->val>list2->val){
                curr->next=list2;
                list2=list2->next;
            }
            else{
                curr->next=list1;
                list1=list1->next;
            }
            curr=curr->next;
        }
        if(!list1){
            curr->next=list2;
        }
        else curr->next=list1;
        
        return ans;
    }
};

// Recursive Solution
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == NULL) return l2;
		if(l2 == NULL) return l1;
		if(l1->val < l2->val){
			l1->next = mergeTwoLists(l1->next, l2);
			return l1;
		} else{
			l2->next = mergeTwoLists(l1, l2->next);
			return l2;
		}
    }
};