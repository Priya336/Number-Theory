// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin>>N;
    int target;
    cin>>target;
    vector<int>nums(N);
    for(int i=0;i<N;i++){
        cin>>nums[i];
    }
         vector<int>arr(2);
       if(nums.size()==0){
     arr[0]=-1;
     arr[1]=-1;
       }
       int i=0;
    int j=nums.size()-1;
    int mid=(j)/2;
    int ans;
    while(mid>=0){
        if(nums[mid]==target){
            ans=1;

            break;
        }
        if(nums[mid]<target){
            mid=(mid+j+1)/2;
            i=mid;
        }
        else{
            mid=(i+mid)/2;
            j=mid;
        }
        ans=0;
    }
    cout<<ans;
 
    if(ans==0){
        if( nums.size()==1 && nums[0]==target ){
     arr[0]=0;
       arr[1]=0; 
       
  }
       else{arr[0]=-1;
       arr[1]=-1; 
       }
    }
    else{
    j=nums.size()-1;
    int k=mid+1;
    int start=mid;
    int end=mid;
    while(k<=j){
    if(nums[k]==target){
             end=k;
        k++;
     
    }
    else{
      
        break;
    }
    }

    k=mid-1;
     while(k>=0){
    if(nums[k]==target){
        start=k;
        k--;
          
    }
    else{
      
        break;
    }
    }
    arr[0]=start;
    arr[1]=end;
    
    }

cout<<arr[0]<<" "<<arr[1];
    return 0;
}