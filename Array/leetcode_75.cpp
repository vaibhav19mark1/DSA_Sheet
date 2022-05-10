#include<vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int count[3]={0};
        for(int i=0;i<n;i++){
            count[nums[i]]++;
        }
        for(int i=0,j=0;i<3;i++){
            while(count[i]>0){
                nums[j++]=i;
                count[i]--;
            }
        }
    }
};

// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int k=nums.size()-1;
//         int j=0;
//         for(int i=0;i<=k;i++){
//             if(nums[i]==0){
//                 swap(nums[i],nums[j++]);
//             }
//             else if(nums[i]==2){
//                 swap(nums[i--],nums[k--]);
//             }
//         }
//     }
// };