#include<vector>
#include<algorithm>
using namespace std;

// Solution 1
class Solution {
public:
    int minMoves(vector<int>& nums) {
        if(nums.size()==1) return 0;
        int ans=0,m=nums[0];
        for(int n:nums){
            m=min(n,m);
        }
        for(int n: nums){
            ans+=n-m;
        }
        return ans;
    }
};

// Solution 2
class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int ans=0;
        for(int i=n-1;i>0;i--){
            ans+=nums[i]-nums[0];
        }
        return ans;
    }
};