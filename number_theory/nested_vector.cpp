#include<bits/stdc++.h>
using namespace std;
int main(){
// //    vector<pair<int,int>>v={{1,2},{2,3},{3,4},{4,5}};
//  vector<pair<int,int>>v;
//  //input element
// for(int i=0;i<5;i++){
//     int a,b;
//     cin>>a>>b;
//     v.push_back({a,b});
//  }
//  for(int i=0;i<v.size();i++){
//    swap(v[i].first,v[i].second);//many operation can be performed using this 
//  }
//  for(int i=0;i<v.size();i++){
//     cout<<v[i].first<<" "<<v[i].second<<endl;
//  }
 

//array of vector and vector of vector 
// int n;
// cin>>n;
// vector<int>a[n] ;//array of vectors
// for(int i=0;i<n;i++){
//     int m;
//     cin>>m;
//     for(int j=0;j<m;j++){
//        int x;
//         cin>>x;
//         a[i].push_back(x);
//     }
// }
// for(int i=0;i<n;i++){
//     for(int j=0;j<a[i].size();j++){
//        cout<<a[i][j];
//     }
// }
//fixed size of vector; 2d vector no. of rows constant but coloum variable


//vetcor of vector ave dynamical rows and coloumn 
vector<vector<int>>v;
int N;
cin>>N;
for (int i=0;i<N;i++){
    int m;
    cin>>m;
    vector<int>c;
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
       c.push_back(x);
    }
    v.push_back(c);// we have to pass complete vector into the vector outside 
}
for(int i=0;i<N;i++){
    for(int j=0;j<v[i].size();j++){
       cout<<v[i][j];
    }
}
return 0;
}