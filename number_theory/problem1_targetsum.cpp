#include<bits/stdc++.h>
using namespace std;
int main(){

    int target;
    cin>>target;
    int n;
    cin>>n;
    vector<int>v(n);
 for(int i=0;i<n;i++){
  cin>>v[i];
 }

 sort(v.begin(),v.begin()+n);
 for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
 }
 cout<<endl;
 int i=0;
 int j=n-1;
 while(i<j){
    if(v[i]+v[j]==target){
        cout<<v[i]<<" "<<v[j]<<endl;
    }
   (v[i]+v[j]>target)?j--:i++;
    }
 
 return 0;
}

// time compilexity O(nlog n)