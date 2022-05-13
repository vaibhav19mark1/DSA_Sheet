#include<vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++) sum+=nums[i];
        sum-=n*(n+1)/2;
        return sum==0 ? 0 : -sum;
    }
};

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0,n=nums.size(),sum_n=0;
        for(int i=0;i<n; i++) sum+=nums[i];
        for(int i=1;i<=n;i++) sum_n+=i;
        return sum_n-sum;
    }
};