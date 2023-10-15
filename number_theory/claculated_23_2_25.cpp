#include<bits/stdc++.h>
using namespace std;
const int M=1e+7;

int power(int a,int b,int m){
if(b==0){
    return 1;
}
else{
    if(b%2==0){
       return (power(a,b/2,m)*power(a,b/2,m)%m)%m;
    }
    else{
       return (a*(power(a,b/2,m)*power(a,b/2,m),m)%m)%m;
    }
}

}
int main(){
    int a,b;
    cin>>a>>b;
    //64^32^40;
    int ans=power(a,power(b,5,M-1),M);
    cout<<ans;
    return 0;
}

//application of the theorem
// class Solution {
// public:
// int power(long long a,int sum,int M){
//     if(sum==0){
//         return 1;
//     }
//    if(sum%2==0){
//        return (power(a,sum/2,M)*power(a,sum/2,M))%M;
//    }
//    else{
//       return (a*(power(a,sum/2,M)*power(a,sum/2,M))%M)%M;
//    }
// }
//     int superPow(int a, vector<int>& b) {
//         int n=b.size();
//         int sum=0;
//         int j=0;
//         for(int i=n-1;i>=0;i--){
//         long long p=(b[i]*(power(10,j,1140)))%1140;
//            cout<<p<<endl;
//            sum=sum+p;
//            j++;
//         }
//         cout<<sum<<endl;
//        int ans= power(a,sum,1337);
//         return ans;
//     }
// };