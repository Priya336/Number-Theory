#include<bits/stdc++.h>
using namespace std;

int solve(vector<vector<int>>v,int r,int c,int maxi){
    if(r>=v.size()|| c>=v[0].size()){
        return 0;
    }
    int right=solve(v,r+1,c,maxi);
    int diagonal=solve(v,r+1,c+1,maxi);
    int bottom=solve(v,r,c+1,maxi);
    if(v[r][c]==1){
    int ans=1+min(right,min(bottom,diagonal));
     maxi=max(ans,maxi);
     return maxi;
    }
    else{
        return 0;
    }
}
int memo(vector<vector<int>>v,int r,int c,int maxi,vector<vector<int>>dp){
        if(r>=v.size()|| c>=v[0].size()){
        return 0;
    }
    if(dp[r][c]!=-1){
        return dp[r][c];
    }
    int right=memo(v,r+1,c,maxi,dp);
    int diagonal=memo(v,r+1,c+1,maxi,dp);
    int bottom=memo(v,r,c+1,maxi,dp);
    if(v[r][c]==1){
    dp[r][c]=1+min(right,min(bottom,diagonal));
     maxi=max(dp[r][c],maxi);
     return maxi;
    }
    else{
        return 0;
    }
}

int tab(vector<vector<int>>v,int &maxi){
    int N=v.size();
    int M=v[0].size();
    vector<vector<int>>dp(N+1,vector<int>(M+1,0));
   for(int i=N-1;i>=0;i--){
       for(int j=M-1;j>=0;j--){
            int right=dp[i+1][j];
    int diagonal=dp[i+1][j+1];
    int bottom=dp[i][j+1];
    if(v[i][j]==1){
    dp[i][j]=1+min(right,min(bottom,diagonal));
     maxi=max(dp[i][j],maxi);
    }
    else{
       dp[i][j] =0;
    }   
       }
   }
   return maxi;
}

int space(vector<vector<int>>v,int &maxi){
    int N=v.size();
    int M=v[0].size();
   vector<int>curr(M+1);
    vector<int>pre(M+1);
   for(int i=N-1;i>=0;i--){
       for(int j=M-1;j>=0;j--){
            int right=pre[j];
    int diagonal=pre[j+1];
    int bottom=curr[j+1];
    if(v[i][j]==1){
   curr[j]=1+min(right,min(bottom,diagonal));
     maxi=max(curr[j],maxi);
    }
    else{
      curr[j] =0;
    }   
       }
       pre=curr;
   }
   return maxi;
}
int main(){
    int N;
    int M;
    cin>>N>>M;
    vector<vector<int>>v(N,vector<int>(M));
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin>>v[i][j];
        }
    }
    // int maxi=0;
//   int ans= solve(v,0,0,maxi);
// cout<<ans;
//  maxi=0;
// vector<vector<int>>dp(N,vector<int>(M,-1));
// int b=memo(v,0,0,maxi,dp);
// cout<<b;
// 
int maxi=0;
int s=space(v,maxi);
cout<<s;
return 0;
}