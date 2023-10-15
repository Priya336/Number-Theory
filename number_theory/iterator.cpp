#include<bits/stdc++.h>
using namespace std;
int main(){
//     vector<int>v={1,2,3,4,5};
//     vector<int>::iterator it=v.begin();
//     for(it=v.begin();it!=v.end();++it){
//      cout<<(*it)<<endl;
//     }

//     //iterator of pair of vector
//     vector<pair<int ,int>>p={{1,2},{2,3},{3,4}};
//     vector<pair<int ,int >>::iterator itt=p.begin();
//     for(itt=p.begin();itt!=p.end();itt++){
//  cout<<(*itt).first<<" "<<(*itt).second<<endl;
//     }
//      for(itt=p.begin();itt!=p.end();itt++){
//  cout<<itt->first<<" "<<itt->second<<endl;
//     }

//shortcut in iterators

vector<int>v={1,2,3,4,5};
for(int value:v){
    cout<<value<<" "<<endl;
}
vector<pair<int ,int>>p={{1,2},{2,3},{3,4}};
for(pair<int,int> value:p){
    cout<<value.first<<" " << value.second<<endl;
}
/// @brief auto keyword is used for dynamically allocation of datattype
/// @return 

for(auto &value:p){
    cout<<value.first<<" " << value.second<<endl;
}


return 0;
}