#include<bits/stdc++.h>
using namespace std;

//we are assuming that a,b  is int or less than 10^9
int power(int a,int b,int M){
    if(b==0){
        return 1;
    }
    if(b%2!=0){
     return (a*(power(a,b/2,M)*power(a,b/2,M))%M)%M;
    }
    else{
        return (power(a,b/2,M)*power(a,b/2,M))%M;
    }
}

int iter(int a,int b,int M){
    int ans=1;
    while(b){
        if(b&1==1){
            ans=(ans*1ll* a)%M;
        }
        a=(a*a*1ll)%M;
        b>>=1;
    }
    return ans;
}
int main(){
    int a,b;
    cin>>a>>b;
    int ans=power(a,b,1e+7);
    int c=iter(a,b,1e+7);
    cout<<ans<<endl<<c;
    return 0;

}

//log(b) =time complexity