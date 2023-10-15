#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int>v1,pair<int,int>v2){
    if(v1.first!=v2.first){
      return v1.first>v2.first;
       }
    
    else{
        if(v2.second>v1.second){
            return true;
        }
        else{
            return false;
        }
    }

}
int main(){
    int N;
    cin>>N;
    vector<pair<int,int>>v(N);
   for(int i=0;i<N;i++){
cin>>v[i].first>>v[i].second;
   }
   sort(v.begin(),v.end(),cmp);
   for(int i=0;i<N;i++){
   cout<<v[i].first<<"  "<<v[i].second<<endl;
   }
   return 0;
}
//comparison is occuring between the two adject pair ,element when false is returning 
