#include<bits/stdc++.h>
using namespace std;

void printBinary(int a){
    for(int i=10;i>=0;i--){
cout<<((a>>i)&1);
    }
    cout<<endl;
}
int main(){
//    printBinary(5);
//    int p=(5>>1)&1;// check the location of the bits the shift is that no. of times
//    if(p==0){
//     cout<<"unset"<<endl;}
//     else{
//         cout<<"set"<<endl;
//    }
//    int h=(1<<4)|5; //set the 4th bit of 5
//    printBinary(h);
//    cout<<h<<endl;
//    int g=~(1<<0);//unset 0th bit of 5
//    h=g&5;
//    printBinary(h);
//    cout<<h<<endl;

//    //toggle a bit means if 0 then or if 1 the make it 0
//    printBinary(5^(1<<1));
//    cout<<__builtin_popcount(h);
//       cout<<__builtin_popcountll((1ll<<32)-1);


//     //   swapping two no.

//     int  a;
//     cin>>a;
//     int b;
//     cin>>b;
//   a=a^b;
//     b=a^b;
//     a=a^b;
//    cout<<a<<" "<<b<<endl;
//    printBinary(a);
//     printBinary(b);

//     //find no. is odd or even 
//      cin>>a;
//      if(a&(1>>0)==1){
//         cout<<"odd"<<endl;
//      }
//      else{
//         cout<<"even"<<endl;
//      }
    return 0;
}