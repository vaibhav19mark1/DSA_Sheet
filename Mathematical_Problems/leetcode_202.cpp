#include<cmath>
using namespace std;

class Solution {
public:
    int sqr(int n){
        int sum=0;
        while(n!=0){
            sum+=pow(n%10,2);
            n/=10;
        }
        return sum;
    }
    
    bool isHappy(int n) {
        int slow=n,fast=sqr(n);
        while(slow!=fast){
            slow=sqr(slow);
            fast=sqr(sqr(fast));
        }
        return slow==1;
    }
};