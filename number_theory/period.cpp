// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
 int N;
 cin>>N;
 vector<pair<int,int>>v(N);
 for(int i=0;i<N;i++){
     v[i].second=i;
     cin>> v[i].first;
 }
 
sort(v.begin(),v.end());
//  for(int i=0;i<N;i++){
//      cout<<v[i].first<<" "<<v[i].second<<endl;
//  }
multimap<int,int>s;
 int count =0;
 int a=0;
 for(int i=0;i<N;i++){
      
   if(v[i].first!=v[i+1].first){
       if(v[i-1].first!=v[i].first){
           s.insert({v[i].first,0});
       }
       count++;
   }
  else{
       a=v[i+1].second-v[i].second;
        s.insert({v[i].first,a});
       
 }
     
 } 
     vector<int> del;
     auto it=s.begin();
while(it !=s.end()){
  
    int b=it->first;
        auto d=it;
        auto e=it;
      
    if(d->first == (++d)->first && e->second != (++e)->second){
      count--;
		del.push_back( it->first );
        auto f=it;
        // while(f->first!=(++f)->first){
        //     it++;
        // }
        it++;
}
}
for( int i : del){
	s.erase(i);
    }
 

   cout<<count<<endl;
 for(auto i=s.begin();i!=s.end();++i){
    //  auto d=i;
    //  if(d->first!=(++d)->first ){
     cout<<i->first<<" "<<i->second<<endl;
    //  }
 }

    return 0;
}