#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int l,r;
        vector<vector<int>> ans;
        for(int i=0;i<n;i++){
            l=i+1;
            r=n-1;
            if(nums[i]>0) break;
            if(i>0 && nums[i]==nums[i-1]) continue;
            while(l<r){
                int sum=nums[i]+nums[l]+nums[r];
                if(sum<0) l++;
                else if(sum>0) r--;
                else{
                    ans.push_back({nums[i],nums[l],nums[r]});
                    int preL=nums[l],preR=nums[l];
                    while(l<r && nums[l]==preL) l++;
                    while(l<r && nums[r]==preR) r--;
                }
            }
        }
        return ans;
    }
};