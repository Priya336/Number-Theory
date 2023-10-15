#include<bits/stdc++.h>
using namespace std;
void print(unordered_map<int,int>m){
//     unordered_map<int,string>::iterator it;
// for(it=m.begin();it!=m.end();it++){
//         cout<<(*it).first<<" "<<(*it).second<<endl;
//     }
for(auto &value:m){
    cout<<value.first<<" "<<value.second<<endl;
}
}
int main(){
    unordered_map<int ,int>m;
    m[5]=1;
    m[2]=2;
    m[3]=3;
    print(m);
    return 0;
}