#include<bits/stdc++.h>
using namespace std;
void print(map<int,string>m){
     map<int,string>::iterator it;
for(it=m.begin();it!=m.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
}
int main(){
    map<int,string>m;
    m[8]="abc"; //O(logn)
    m[2]="bcd";
    m[5]="cde";
  //  m[6];//O(n)
    m.insert({7,"bgr"});
   
    
    for(auto &value:m){
        cout<<value.first<<" "<<value.second<<endl;
    }//O(nlogn)

    //find return iterator
cout<<"find"<<endl;
    auto i=m.find(5);
    if(i==m.end()){
        cout<<"no  value"<<endl;
    }
    else{
    cout<<(*i).first<<" "<<(*i).second<<endl;
    }

    //erase
    m.erase(5);
    cout<<"print";
    print(m);
    return 0;
    }