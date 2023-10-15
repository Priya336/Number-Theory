#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<string>q;
    int n;
    cin>>n;
    int a=n;
    while(a--){
       string x;
        cin>>x;
        q.push(x);
    }
     int b=n;
     while(b--){
        cout<<q.front()<<endl;
        q.pop();
     }
     return 0;
}