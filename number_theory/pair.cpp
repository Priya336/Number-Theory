#include<bits/stdc++.h>
using namespace std;
//pair maintain the relation 
int main(){
    // pair<int,string> p;
    // p={1,"abc"};
    // p=make_pair(1,"abc");
    // cout<<p.first<<" "<<p.second<<endl;
    // pair<int,string>p1=p;
    // pair<int,string>&p2=p;
    // p1.first=2;
    // p2.first=3;
    // cout<<p1.first<<endl;
    // cout<<p2.first<<endl;
    int a[]={1,2,3};
    int b[]={4,5,6};
 pair<int ,int>arr2[3];
arr2[0]={1,4};
arr2[1]={2,5};
arr2[2]={3,6};
swap(arr2[0].first,arr2[1].first);
for(int i=0;i<3;i++){
    cout<<arr2[i].first<<" "<<arr2[i].second<<endl;
}


//vectors
vector<int>v(6,2);
//vector can be copied
vector<int>&v1=v;//refrence change the size =>O(n)
v1.push_back(6);//cpy of v is formed
 
for(int i=0;i<v1.size();i++){
    cout<<v[i]<<endl;
}

return 0;
}