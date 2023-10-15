//Best way to find Primenumber 
#include<bits/stdc++.h>
using namespace std;
int N=7;
int hp=0;
int lp=0;
vector<int>v(N,1);
int main(){
    for(int i=2;i<N;i++){
      if(v[i]==1){
          hp=i;//highrst prime factor
          
        if(lp==0){
            lp==i;//lowest prime factor
        }
        for(int j=2*i;j<N;j=j+i){
        v[j]=0;
        }
      }
    }
    //we can find prime factorisation  using this concept as we need only one prime factor of a no. for finding 
    //prime factoristion
    for(int i=0;i<N;i++){
        cout<<i<<"->"<<v[i]<<endl;
    }
    cout<<lp<<hp;
    return 0;
}