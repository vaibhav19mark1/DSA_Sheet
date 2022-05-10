#include<vector>
using namespace std;
// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int n=prices.size()-1;
//         int buy,sell,profit=0,i=0;
//         while(i<n){
//             while(i<n && prices[i+1]<=prices[i]) i++;
//             buy=prices[i];
//             while(i<n && prices[i+1]>prices[i]) i++;
//             sell=prices[i];
//             profit+=sell-buy;
//         }
//         return profit;
//     }
// };

class Solution {
public:
    int maxProfit(vector<int> &prices) {
        int n=prices.size(),p=0;
        if(n==1) return 0;
        for(int i=0;i<n-1;i++){
            if(prices[i+1]-prices[i]>=0) p+=prices[i+1]-prices[i];
        }
        return p;
    }
};