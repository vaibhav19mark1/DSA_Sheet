#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& h) {
        int n=h.size();
        int water=(n-1)*(min(h[n-1],h[0]));
        int i=0,j=n-1;
        while(i<j){
            if(h[i]<h[j]){
                i++;
            }
            else j--;
            water=max(water,(j-i)*min(h[i],h[j]));
        }
        return water;
    }
};