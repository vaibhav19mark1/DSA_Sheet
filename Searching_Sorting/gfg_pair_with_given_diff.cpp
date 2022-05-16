#include<iostream>
#include<unordered_map>
using namespace std;

void findPair(int a[],int n,int x){
    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
        m[a[i]]++;
    }
    for(int i=0;i<n;i++){
        if(m.find(a[i]+x)!=m.end()){
            cout<<"Pair: ("<<a[i]+x<<", "<<a[i]<<")";
            return;
        }
    }
    cout<<"Not found";
}

int main(){
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    findPair(a,n,x);
    return 0;
}