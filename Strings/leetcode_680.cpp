#include<string>
using namespace std;

class Solution {
public:
    bool palindrome(string s,int l,int r,int c){
        if(c>1) return false;
        while(l<r){
            if(s[l]==s[r]){
                l++;
                r--;
            }
            else{
                return palindrome(s,l+1,r,c+1) || palindrome(s,l,r-1,c+1);
            }
        }
        return true;
    }
    
    bool validPalindrome(string s) {
        int l=0,r=s.size()-1;
        return palindrome(s,l,r,0);
    }
};