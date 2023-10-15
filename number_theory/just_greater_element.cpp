#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>>N;
    vector<int>v(N);
    int i=0;
    while(i<N){
        cin>>v[i];
        i++;
    }
      unordered_map<int,int>m;
    stack<int>s;
    s.push(v[0]);
    m[v[0]]=-1;
    i=1;
    while(!s.empty()){
       
        if(i==N){
           
         m[s.top()]=-1;
          s.pop();
        }
       else{
        while(1){
             int a=s.top();
        if(v[i]>a && !s.empty()){
           
            s.pop();
           m[a]=v[i];
            
        }
        else{
            s.push(v[i]);
            break;
        }
        }
        i++;
    }
   
    }
     for(auto j:m){
            cout<<j.first<<" = "<<j.second<<endl;}
    return 0;
}