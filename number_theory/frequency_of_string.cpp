#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<string,int>m;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        m[s]=m[s]+1;
    }
    for(auto value:m){
        cout<<(value).first<<" "<<value.second<<endl;
    }
    return 0;
}
// frequencuy is printed in lexical order due to chronological properties of key