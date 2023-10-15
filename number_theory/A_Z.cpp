#include<bits/stdc++.h>
using namespace std;

void printBinary(int a){
    for(int i=10;i>=0;i--){
cout<<((a>>i)&1);
    }
    cout<<endl;
}
int main(){
    // for(char i='A';i<='Z';i++){
    //     cout<<i<<" ";
    //     printBinary(int(i));
    // }
    //   for(char i='a';i<='z';i++){
    //     cout<<i<<" ";
    //     printBinary(int(i));
    // }
    // char c;
    // cin>>c;
    // //convert to  lower case
    // // c=c|1<<5;
    // c=c|' ';//lower case conversion
    // cout<<c;
    //  c=c&'_';
    //   cout<<c;//upper case conversion

    //making till ith bit LSB unset
    int a=31;
    int i=2;
    int b=~((1<<i)-1);
    printBinary(15&b);
     //making till ith bit MSB unset
     b=((1<<i)-1);
     printBinary(15&b);
    return 0;
}