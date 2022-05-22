#include<vector>
using namespace std;

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        vector<int> a(k,0);
        a[0]=1;
        int sum=0,count=0;
        for(int n: nums){
            sum=(sum+n)%k;
            if(sum<0) sum+=k;
            count+=a[sum];
            a[sum]++;
        }
        return count;
    }
};