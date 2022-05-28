#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    int m,n;
    bool found(string word,vector<vector<char>>& board,int i,int j){
        if(!word.size()) return true;
        if(i<0 || i>=m || j<0 || j>=n || board[i][j]!=word[0]) return false;
        char c=board[i][j];
        board[i][j]='*';
        string s=word.substr(1);
        bool b=found(s,board,i+1,j) || found(s,board,i,j+1) || found(s,board,i-1,j) || found(s,board,i,j-1);
        board[i][j]=c;
        return b;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        m=board.size(),n=board[0].size();
        int l=word.length();
        if(l==0) return true;
        if(l>m*n) return false;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(found(word,board,i,j)) return true;
            }
        }
        return false;
    }
};