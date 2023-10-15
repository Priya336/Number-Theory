#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    multiset<int>s;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s.insert(x);
    }
    for(auto i:s){
        cout<<i<<" ";
    }
    multiset<int> ::iterator it;
    it=s.begin();
    int a=*it;
    int b=*(++it);
    int count1=1;
    while(a==b){
    count1++;
    a=b;
    b=*(++it);
    }
    it=s.end();
    int c=*(--it);
    int d=*(--it);
    int count2=1;
    while(c==d){
    count2++;
    c=d;
    d=*(--it);
    }
    cout<<"maximum difference=="<<c-a<<endl;
    cout<<"NO.of times it can happen=="<<count1*count2<<endl;

    return 0;
}