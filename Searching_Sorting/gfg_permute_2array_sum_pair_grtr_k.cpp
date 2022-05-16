#include<iostream>
#include<algorithm>
using namespace std;

bool isPossible(int a[],int b[],int n,int k){
    sort(a,a+n);
    sort(b,b+n,greater<int>());
    for(int i=0;i<n;i++){
        if(a[i]+b[i]<k) return false;
    }
    return true;
}

int main(){
    int n,k;
    cin>>n>>k;
    int a[n],b[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    cout<<isPossible(a,b,n,k);
    return 0;
}