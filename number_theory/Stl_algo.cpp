#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int>v={1,2,3,4,5};
   
    int min=*min_element(v.begin(),v.end());//it return the pointer to the minimum element
    
    int max=*max_element(v.begin(),v.end());//it return the pointer to the maximum element
    cout<<min<<endl;
     cout<<max<<endl;
     int sum=accumulate(v.begin(),v.end(),0);//sum of the elements int hte array
     cout<<sum<<endl;
     int ct=count(v.begin(),v.end(),6);//finding count of given element in the arry
     cout<<ct<<endl;
     auto it=find(v.begin(),v.end(),5);//find if the element is present int array or not
     if(it!=v.end()){
        cout<<*it<<endl;
     }
     else{
        cout<<'element Not found'<<endl;
     }

     //reversing a array,string,vector
     reverse(v.begin()+2,v.end());
     for(int i=0;i<5;i++){
        cout<<v[i]<<endl;
     }
      
    return 0;
}