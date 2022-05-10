#include<vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()<2) return 0;
        
        // int maxProfit=0;
        // int minPrice=prices[0];
        // for(int i=1;i<prices.size();i++){
        //     if(prices[i]>prices[i-1]){
        //         maxProfit=max(maxProfit,prices[i]-minPrice);
        //     }
        //     else{
        //         minPrice=min(minPrice,prices[i]);
        //     }
        // }
        // return maxProfit;
        
        int lmin=prices[0],p=0,n=prices.size();
        for(int i=1;i<n;i++){
            if(lmin>prices[i]) lmin=prices[i];
            if(prices[i]-lmin>p) p=prices[i]-lmin;
        }
        return p;
    }
};