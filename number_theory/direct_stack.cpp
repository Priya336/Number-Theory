#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int>s;
    int n;
    cin>>n;
    int a=n;
    while(a--){
        int x;
        cin>>x;
        s.push(x);
    }
    int b=n;
    while(b--){
    cout<<s.top()<<endl;
    s.pop();
    }
    return 0;
}