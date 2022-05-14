#include<vector>
#include<set>
#include<cmath>
using namespace std;

class Solution {
public:
    double distance(vector<int> p1,vector<int> p2){
        return sqrt((p2[0]-p1[0]) * (p2[0]-p1[0]) + (p2[1]-p1[1]) * (p2[1]-p1[1]));
    }
    
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        vector<vector<int>> points={p1,p2,p3,p4};
        set<double> lengths;
        for(int i=0;i<4;i++){
            for(int j=i+1;j<4;j++){
                double l=distance(points[i],points[j]);
                if(l!=0){
                    lengths.insert(l);
                }
                else return false;
            }
        }
        return lengths.size()==2;
    }
};