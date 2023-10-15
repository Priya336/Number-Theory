#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int a,int b){
    int q=arr[a];
    int p=a;
    int i=a+1;
    int j=b;
   
    while(i<=j){
         if(arr[i]>q && arr[j]<q){
        swap(arr[j],arr[i]);
        }
        else{
        if(arr[j]>q){
            j--;
        }
        if(arr[i]<q){
            i++;
        }
        }
    }
      p=j;
    swap(arr[j],arr[a]);
    
    return p;
    
}

void Quick(int arr[],int a,int b){
   if(a<b){
     
        int q=partition(arr,a,b);
   
        Quick(arr,a,q-1);
        Quick(arr,q+1,b);
   }
  
   
}

int main(){
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
  Quick(arr,0,N-1);
    for(int i=0;i<N;i++){
      cout<<arr[i]<<" ";
  }
    return 0;
}