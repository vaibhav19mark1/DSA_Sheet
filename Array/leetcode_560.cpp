#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        int sum=0,ans=0;
        m[sum]=1;
        for(auto n:nums){
            sum+=n;
            int target=sum-k;
            if(m.find(target)!=m.end()) ans+=m[target];
            m[sum]++;
        }
        return ans;
    }
};