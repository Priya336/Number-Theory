#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>>N;
    bool prime =true;
    for(int i=2;i<=sqrt(N);i++){
    if(N%i==0){
        prime=false;
        break;
        
    }
    }
    cout<<prime<<endl;
    return 0;
    }