#include <bits/stdc++.h>
using namespace std;

// int check_prime(int N){
//     int prime =1;
//     for(int i=2;i<=sqrt(N);i++){
//     if(N%i==0){
//         prime=0;
//         break;
//     }
//     }
//     return prime;
// }
int main()
{
    int N;
    cin >> N;
    //   int val=  check_prime(N);
    vector<int> k;
    map<int, int> m;

    for (int i = 2; i <= sqrt(N); i++)
    {
       
        while (N % i == 0)
        {
            k.push_back(i);
            m[i]++;
            N = N / i;
        }
       
    }
 if (N > 1)
        {
            k.push_back(N);
            m[N]++;
            
        }
    cout << k.size() << endl;
    for (auto n : m)
    {
        cout << n.first << "->" << n.second<<endl;
    }
    cout << endl;
    for (int prime : k)
    {
        cout << prime << " ";
    }
    return 0;
}