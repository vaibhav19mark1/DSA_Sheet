#include<string>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x%10==0 && x!=0) return false;
        int n=0;
        while(x>n){
            n=n*10 + x%10;
            x/=10;
        }
        return n==x || x==n/10;
    }
};


class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        if(x==0) return true;
        string s=to_string(x);
        int n=s.length();
        for(int i=0;i<n/2;i++){
            if(s[i]!=s[n-i-1]){
                return false;
            }
        }
        return true;
    }
};