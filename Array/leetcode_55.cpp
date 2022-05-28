#include<vector>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int d=0;
        for(int i=0;i<n;i++){
            d=max(d,i+nums[i]);
            if(d>=n-1) return true;
            if(d<=i) return false;
        }
        return true;
    }
    
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int last=n-1;
        for(int i=n-2;i>=0;i--){
            if(i+nums[i]>=last) last=i;
        }
        return last==0;
    }
};