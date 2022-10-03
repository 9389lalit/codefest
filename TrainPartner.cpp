#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        int m = n % 8;
        if (m == 1)
        {
            cout << n + 3 << "LB" << endl;
        }
        if (m == 2)
        {
            cout << n + 3 << "MB" << endl;
        }
        if (m == 3)
        {
            cout << n + 3 << "UB" << endl;
        }
        if (m == 4)
        {
            cout << n - 3 << "LB" << endl;
        }
        if (m == 5)
        {
            cout << n - 3 << "MB" << endl;
        }
        if (m == 6)
        {
            cout << n - 3 << "UB" << endl;
        }
        if (m == 7)
        {
            cout << n + 1 << "SU" << endl;
        }
        if (m == 0)
        {
            cout << n - 1 << "SL" << endl;
        }
    }
}