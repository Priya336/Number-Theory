#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >>N;
    vector<int>v[N];
    vector<int>masks(N,0);
    for(int i=0;i<N;i++){
        int days;
        cin>>days;
        int mask=0;
        for(int j=0;j<days;j++){
            int x;
            cin>>x;
            mask=(mask | (1<<x));
            v[i].push_back(x);
        }
        masks[i]=mask;
    }
   
    // for(int i=0;i<N;i++){
    //   cout<<masks[i]<<endl;
    // }
  int ans=0;
  for(int i=0;i<N;i++){
    for(int j=i+1;j<N;j++){
    int intersection=masks[i]&masks[j];
    int common_days=__builtin_popcount(intersection);
    ans=max(ans,common_days);
    cout<<i<<" "<<j<<" "<<common_days<<endl;
    }

  }
  cout<<ans;
    return 0;
}

//complexity of a program move from O(n^2*30)->O(30) 