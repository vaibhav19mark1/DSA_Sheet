#include<unordered_map>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int> m(n);
        m[nums[0]]=0;
        for(int i=1;i<n;i++){
            if(m.find(target-nums[i])!=m.end()){
                return {i,m[target-nums[i]]};
            }
            else m[nums[i]]=i;
        }
        return {};
    }
};
