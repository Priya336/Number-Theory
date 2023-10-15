//finding odd count in an array in O(N)time complexity and O(1) space complexity
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ans=ans^x;
    }
    char p='1';
    int s='c'-'0';
    cout<<s<<endl;
    cout<<ans;
    return 0;
}
//xor of two same no. is x^x= 0 and xor of x^0=x