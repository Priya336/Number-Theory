#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        int K;
        int candy=0;
        cin>>N>>K;
        multiset<int>s;
       for(int i=0;i<N;i++){
        int x;
        cin>>x;
        s.insert(x);
       }
       while(K--){
      auto it=s.end();
      it=--it;
      candy=candy +(*it);
      s.erase(it);
       s.insert(*it/2);
       }
       cout<<candy<<endl;
    }

    return 0;
}