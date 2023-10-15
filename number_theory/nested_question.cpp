#include<bits/stdc++.h>
using namespace std;
int main(){
 map<int,set<string>>m;
 int n;
 cin>>n;
 for(int i=0;i<n;i++){
    int marks;
    string name;
    cin>>name>>marks;
   m[marks].insert(name);
 }
 for(auto &value:m){
   for(auto &a:value.second){
    cout<<value.first<<" "<<a<<endl; 
   }
 }
 return 0;
}