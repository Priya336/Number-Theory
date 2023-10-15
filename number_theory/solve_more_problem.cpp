#include<bits/stdc++.h>
using namespace std;

void solve(multimap<long long,long long >m,int N,int K){
  multimap<long long ,long long>::iterator it;
 long long count =0;
  long long  X=0;
  long long maxi=0;
  vector<multimap<long long,long long >::iterator>del;
  for(it=m.begin();it!=m.end();it++){
    X=X+it->first+it->second;
    
     if(X<=K){
    del.push_back(it);
    maxi=max(maxi,it->second);
      count++;
    }
    if(X>K){
       X=X-it->first-it->second;
    }
    }
    for (auto i:del){
      m.erase(i);
    }
   long long mini=INT_MAX;
    for(auto it:m){
      mini=min(mini,it.first+it.second);
    }
    int c=K-X;
         multimap<long long ,long long>:: iterator itr;
         itr=m.begin();
         if(itr->first<=c){
           count++;
         }
         else{
           X=X+mini-maxi;
         if(X<=K){
           count++;
         }
           
         }
    // for(auto &value:m){
    //         cout<<value.first<<" "<<value.second<<endl;
    //     }
   cout<<count<<endl;
  
}
int main(){
    int T;
    cin>>T;
    while(T--){
        int N,K;
        cin>>N>>K;
        vector<long long>v(N);
         vector<long long>s(N);
         for(long long i=0;i<N;i++){
            cin>>v[i];
         }
         for(long long i=0;i<N;i++){
            cin>>s[i];
         }
        multimap<long long ,long long>m;
        for(long long i=0;i<N;i++){
         m.insert(pair<long long,long long>(v[i],s[i]));
        }
        // for(auto &value:m){
        //     cout<<value.first<<" "<<value.second<<endl;
        // }
        solve(m,N,K);
    }
    return 0;
}