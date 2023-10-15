class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
       int n=nums.size();
       int mask=-1;
       int x=pow(2,n);
       cout<<x<<endl;
        vector<vector<int>>v;
       for(int i=0;i<x;i++){
           mask=(mask+1);
           cout<<mask<<endl;
           vector<int>s;
           for(int j=n-1;j>=0;j--){
           int a=((mask>>j) &1);
         
           cout<<a;
             int p=a*nums[j];
             if(p!=0 || (nums[j]==0 && a!=0)){
           s.push_back(p);}
           }
           v.push_back(s);
           cout<<endl;
       
       }
return v;
    }
};