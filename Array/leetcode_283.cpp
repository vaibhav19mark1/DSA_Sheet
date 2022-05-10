#include<vector>
using namespace std;

// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int j=0,n=nums.size();
//         for(int i=0;i<n;i++){
//             if(nums[i]!=0){
//                 swap(nums[i],nums[j++]);
//             }
//         }
//     }
// };

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int snowball=0,n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0) snowball++;
            else if(snowball>0){
                nums[i-snowball]=nums[i];
                nums[i]=0;
            }
        }
    }
};