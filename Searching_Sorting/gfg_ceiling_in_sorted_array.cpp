#include<iostream>
using namespace std;

int findCeil(int a[],int l,int r,int x){
    if(x<=a[l]) return l;
    if(x>a[r]) return -1;

    int mid=l+(r-l)/2;
    if(x==a[mid]) return mid;
    else if(x<a[mid]){
        if(mid-1>=l && x>a[mid-1]) return mid;
        else return findCeil(a,l,mid-1,x);
    }
    else{
        if(mid+1<=r && x<=a[mid+1]) return mid+1;
        else return findCeil(a,mid+1,r,x);
    }
}

int main(){
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int ceilIdx=findCeil(a,0,n-1,x);
    if(ceilIdx==-1){
        cout<<"Ceil does not exist";
    }
    else cout<<"Ceil Index: "<<ceilIdx;
    return 0;
}