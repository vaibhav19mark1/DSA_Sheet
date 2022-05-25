// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& m, int n) 
    {
        int candidate;
        int i=0,j=n-1;
        while(i<j){
            if(m[j][i]==1) j--;
            else i++;
        }
        candidate=i;
        
        for(int i=0;i<n;i++){
            if(i!=candidate){
                if(m[i][candidate]==0 || m[candidate][i]==1) return -1;
            }
        }
        return candidate;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}
  // } Driver Code Ends