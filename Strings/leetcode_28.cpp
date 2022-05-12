#include<string>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        auto i=haystack.find(needle);
        if(i==string::npos) return -1;
        return i;
    }
};

class Solution {
public:
    int strStr(string haystack, string needle) {
        int i=0,j=0;
        while(i<haystack.size() && j<needle.size()){
            if(haystack[i]==needle[j]){
                i++;
                j++;
                if(j==needle.size()) return i-needle.size();
            }
            else{
                i=i-j+1;
                j=0;
            }
        }
        return -1;
    }
};