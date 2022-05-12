#include<iostream>
#include<unordered_map>
using namespace std;

void duplicates(string s){
    int n=s.size();
    unordered_map<char,int> mp;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }
    for(auto i:mp){
        if(i.second>1) cout<<i.first<<": "<<i.second<<endl;
    }
}

int main(){
    string s;
    cin>>s;
    duplicates(s);
    return 0;
}