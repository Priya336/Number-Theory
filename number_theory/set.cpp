#include<bits/stdc++.h>
using namespace std;
void print(set<int>s){
    for(auto value:s){
        cout<<value<<endl;
    }
}

int main(){
     set<int>s;
     s.insert(4); //time complixity =O(logn)
      s.insert(5);
       s.insert(1);
        s.insert(7);
         s.insert(2);
         s.insert(2);//unique element collection no a\element twince
         print (s);
         auto it=s.find(1 );
         if(it!=s.end()){
            cout<<(*it)<<endl;
         }
       
         return 0;
}