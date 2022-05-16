#include<iostream>
#include<vector>
#include<cmath>
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
    int getDecimalValue(ListNode* head) {
        vector<int> v;
        ListNode* temp=head;
        int ans=0,n=0;
        while(temp){
            v.push_back(temp->val);
            temp=temp->next;
        }
        int size=v.size();
        for(int i=size-1;i>=0;i--){
            if(v[i]==1) ans+=pow(2,n);
            n++;
        }
        return ans;
    }
};

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int sum=head->val;
        while(head->next){
            sum=sum*2+head->next->val;
            head=head->next;
        }
        return sum;
    }
};