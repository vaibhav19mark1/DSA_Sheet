#include<string>
#include<iostream>
using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int i=0;
        
        while(i<s.size()){
            if(i==0 && s[i]=='#'){
                s.erase(s.begin()+0);
            }
            else if(i>=0 && s[i]=='#'){
                s.erase(i-1,2);
                i--;
            }
            else i++;
        }
        i=0;
        while(i<t.size()){
            if(i==0 && t[i]=='#'){
                t.erase(t.begin()+0);
            }
            else if(i>=0 && t[i]=='#'){
                t.erase(i-1,2);
                i--;
            }
            else i++;
        }
        
        if(s==t){
            return true;
        }
        return false;
    }
};