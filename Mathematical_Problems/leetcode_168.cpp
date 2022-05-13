#include<string>
using namespace std;

class Solution {
public:
    string convertToTitle(int n) {
        string ans="";
        char temp;
        while(n){
            n--;
            temp=(n%26) +'A';
            ans=temp+ans;
            n/=26;
        }
        return ans;
    }
};