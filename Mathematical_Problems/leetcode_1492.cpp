#include<vector>
#include<cmath>
using namespace std;

// Solution 1 - O(n)
class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> factors;
        for(int i=1;i<=n;i++){
            if(n%i==0) factors.push_back(i);
        }
        if(factors.size()<k) return -1;
        return factors[k-1];
    }
};

// Solution 2 - O(sqrt(n))
class Solution {
public:
    int kthFactor(int n, int k) {
        float root=sqrt(n);
        for(int i=1;i<root;i++){
            if(n%i==0 && --k==0) return i;
        }
        for(int i=root;i>=1;i--){
            if(n%(n/i)==0 && --k==0) return n/i;
        }
        return -1;
    }
};