#include<bits/stdc++.h>
using namespace std;

int gcd(int x,int y){
   
    if(x==0){
        return y;
    }
    int a=y%x;
    gcd(a,x);
      
}
int main(){
    int x,y;
    cin>>x>>y;
    int ans=gcd(x,y);
    cout<<ans<<endl;
    int LCM=(x*y)/ans;
    cout<<LCM;
    return 0;
    }