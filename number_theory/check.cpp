#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin>>T;
while(T--){
  long long N,K;
  cin>>N>>K;
 vector<long long>p(N);
  vector<long long>b(N);
    for(int i=0;i<N;i++){
      cin>>p[i];
    }
     for(int i=0;i<N;i++){
      cin>>b[i];
    }
    multimap<long long,long long>m;
    for(int i=0;i<N;i++){
      m.insert(pair<long long,long long>(p[i],b[i]));
    }
    for(auto &value:m){
      cout<<value.first<<" "<<value.second<<endl;
    }
    int X=0;
    int count=0;
 map<long long,long long>::iterator it=m.begin();
    while(N--){
      X=it->first+it->second+X;
       if(X<=K){
           count++;
           int a=it->first;
           cout<<a;
       
       }
    if(X>K){
      X=X-it->first-it->second;
    }
    it++;
    }
    int c=K-X;
    int k=m.size();
   map<long long,long long>::iterator itr=m.begin();
   while(k>0){
     it++;
    k--;
   }
    cout<<it->first<<endl;
  if(it->first<=c){
    count++;
  }
    cout<<count<<endl;
}
	return 0;
}
