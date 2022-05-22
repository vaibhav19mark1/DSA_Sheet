#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& t) {
        int n=t.size();
        vector<int> v;
        for(int i=0;i<n;i++){
            if(isdigit(t[i][t[i].size()-1])){
                v.push_back(stoi(t[i]));
            }
            else{
                int a=v.back();
                v.pop_back();
                int b=v.back();
                v.pop_back();
                switch(t[i][0]){
                    case '+': v.push_back(b+a);
                              break;
                    case '-': v.push_back(b-a);
                              break;
                    case '*': v.push_back(b*a);
                              break;
                    case '/': v.push_back(b/a);
                              break;
                }
            }
        }
        return v.back();
    }
};