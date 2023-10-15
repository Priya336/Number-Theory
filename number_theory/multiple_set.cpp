#include<bits/stdc++.h>
using namespace std;
void print(multiset<int>s){
     for(auto value:s){
        cout<<value<<" ";
      }
}
int main(){
  multiset<int>s;
  s.insert(1);
  s.insert(10);
  s.insert(4);
  s.insert(7);
  s.insert(10);
    s.insert(10);
      s.insert(10);
     print(s);
     cout<<endl;
   auto it=s.find(10);
   if(it!=s.end()){
    s.erase(it);//only 1 10 is deleted 
   }
     
   print(s);
   cout<<endl;
  s.erase(10); //all ten are deeleted
  print(s);
  return 0;

}