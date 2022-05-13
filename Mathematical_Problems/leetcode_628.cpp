#include<vector>
#include<climits>
using namespace std;

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size();
        if(n==3) return nums[0]*nums[1]*nums[2];
        int m1=INT_MIN,m2=INT_MIN,m3=INT_MIN;
        int min1=INT_MAX,min2=INT_MAX;
        for(int i=0;i<n;i++){
            if(nums[i]>m1){
                m3=m2;
                m2=m1;
                m1=nums[i];
            }
            else if(nums[i]>m2){
                m3=m2;
                m2=nums[i];
            }
            else if(nums[i]>m3) m3=nums[i];
            
            if(nums[i]<min1){
                min2=min1;
                min1=nums[i];
            }
            else if(nums[i]<min2){
                min2=nums[i];
            }
        }
        return max(m1*m2*m3,m1*min1*min2);
    }
};