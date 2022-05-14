#include<unordered_map>
#include<string>
#include<vector>
using namespace std;

class Solution {
public:
    int gcd(int a,int b){
        return b==0 ? a : gcd(b,a%b);
    }
    
    int maxPoints(vector<vector<int>>& points) {
        int n=points.size();
        int ans=0;
        
        for(int i=0;i<n;i++){
            unordered_map<string,int> m;
            for(int j=i+1;j<n;j++){
                int dx=points[i][0]-points[j][0];
                int dy=points[i][1]-points[j][1];
                string key;
                if(dx==dy) key="1_1";
                else{
                    int d=gcd(dx,dy);
                    key=to_string(dy/d) + "_" + to_string(dx/d);
                }
                ans=max(ans,++m[key]);
            }
        }
        return ans+1;
    }
};