#include<iostream>
#include<vector>
#include<unordered_map>
#include<stack>
using namespace std;

// Solution 1
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size(),n2=nums2.size();
        vector<int> ans(n1);
        for(int i=0;i<n1;i++){
            int j=n2-1,greEleIdx=-1;
            while(j>=0 && nums2[j]!=nums1[i]){
                if(nums2[j]>nums1[i]) greEleIdx=nums2[j];
                j--;
            }
            ans[i]=greEleIdx;
        }
        return ans;
    }
}; 

// Solution 2
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size(),n2=nums2.size();
        unordered_map<int,int> m;
        stack<int> s;
        vector<int> ans;
        for(int i=n2-1;i>=0;i--){
            while(!s.empty() && s.top()<=nums2[i]){
                s.pop();
            }
            if(s.empty()){
                m[nums2[i]]=-1;
            }
            else m[nums2[i]]=s.top();
            s.push(nums2[i]);
        }
        for(int i=0;i<n1;i++){
            ans.push_back(m[nums1[i]]);
        }
        return ans;
    }  
};