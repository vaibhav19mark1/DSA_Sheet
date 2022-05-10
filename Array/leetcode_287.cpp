#include<vector>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int count[100001]={0};
        int n=nums.size();
        for(int i=0;i<n;i++){
            count[nums[i]]++;
        }
        for(int i=0;i<100001;i++){
            if(count[i]>1){
                return i;
            }
        }
        return 0;
    }
};