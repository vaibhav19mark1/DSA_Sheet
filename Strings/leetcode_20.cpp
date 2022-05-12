#include<vector>
#include<stack>
#include<string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        int n=s.size();
        if(n%2==1) return false;
        stack<char> st;
        int i=0;
        while(i<n){
            switch(s[i]){
                case '(':
                case '[':
                case '{': st.push(s[i]); break;
                case ')': if(st.empty() || st.top()!='(') return false;
                            else st.pop();
                            break;
                case ']': if(st.empty() || st.top()!='[') return false;
                            else st.pop();
                            break;
                case '}': if(st.empty() || st.top()!='{') return false;
                            else st.pop();
                            break;
            }
            i++;
        }
        if(st.empty()){
            return true;
        }
        return false;
    }
};