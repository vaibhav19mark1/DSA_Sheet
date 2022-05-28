#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
    int maxScore(vector<int>& p, int k) {
        int n=p.size(),sum=0,ans=0;
        for(int i=0;i<k;i++){
            sum+=p[i];
        }
        ans=sum;
        for(int i=0;i<k;i++){
            sum+=p[n-i-1]-p[k-i-1];
            ans=max(sum,ans);
        }
        return ans;
    }
};

class Solution {
public:
    int maxScore(vector<int>& p, int k) {
        int sum=0,n=p.size();
        vector<int> l(n+1,0),r(n+1,0);
        for(int i=0;i<n;i++){
            sum+=p[i];
            l[i+1]=sum;
        }
        sum=0;
        for(int i=n-1;i>=0;i--){
            sum+=p[i];
            r[i]=sum;
        }
        int ans=0;
        for(int i=0;i<=k;i++){
            ans=max(ans,l[i]+r[n-k+i]);
        }
        return ans;
    }
};