#include <iostream>
using namespace std;

int main() {
int T;
cin>>T;
while(T--){
    int N;
  cin>>N;
  if(N%2!=0){
    cout<<-1<<endl;
  }
  else{
    int j=N;
    while(j){
      cout<<j;
      j--;
    }
    cout<<endl;
  }
}
	return 0;
}
