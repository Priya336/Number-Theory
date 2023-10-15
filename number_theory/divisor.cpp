#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int d1 = 1, d2 = N;
    int count = 0;
    int sum = 0;
    while (d1 != d2)
    {

        if (N % d1 == 0)
        {
            d2 = N / d1;
            if (d1 == d2)
            {
                count++;
                cout << d1;
                sum += d1;
                break;
            }
            cout << d1 << " , " << d2 << " , ";
            count += 2;
            sum += d1 + d2;
        }

        d1++;
    }
    cout << endl;
    cout << count << endl
         << sum;
    return 0;
}