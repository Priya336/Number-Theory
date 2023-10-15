#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    set<string>s;
    for(int i=0;i<N;i++){
        string str;
        cin>>str;
         s.insert(str);
    }
    int a=0;
    for(auto value:s){
        cout<<value<<endl;
        a++;
    }
    cout<<"no.of unique element="<<a;
    //unordered set
    unordered_set<int>a;//basic data type shoiuld be used

    return 0;
}