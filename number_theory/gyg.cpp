#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }
    int ans=n*factorial(n-1);
    return ans;
}
int perm(int n,int r){
    if(n<r){
        return 0;
    }
    return factorial(n)/(factorial(n-r)*factorial(r));
}
 void solve(){
     int N,K;
     cin>>N>>K;
     int i=0;
     int j=0;
     int check=0;
     int p;
    for( i=0;i<=N;i++){
        for( j=0;j<=N;j++){
          p=perm(i,2)+perm(j,2);
            if(p==K && i+j==N){
                check=1;
                cout<<"Yes"<<endl<<i<<j;
                break;
            }
        }
        if(p==K){
            break;
        }
    }
    if(check==0){
        cout<<"NO"<<endl;
    }
    else{
    while(i--){
        cout<<1<<endl;
    }
      while(j--){
        cout<<-1<<endl;
    }
    }
 }
int main(){
    int T;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}