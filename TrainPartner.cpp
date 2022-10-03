#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        ll num;
        cin >> num;
        int mum = num % 8;
        if (mum == 1)
        {
            cout << num + 3 << "LB" << endl;
        }
        if (mum == 2)
        {
            cout << num + 3 << "MB" << endl;
        }
        if (mum == 3)
        {
            cout << num + 3 << "UB" << endl;
        }
        if (mum == 4)
        {
            cout << num - 3 << "LB" << endl;
        }
        if (mum == 5)
        {
            cout << num - 3 << "MB" << endl;
        }
        if (mum == 6)
        {
            cout << num - 3 << "UB" << endl;
        }
        if (mum == 7)
        {
            cout << num + 1 << "SU" << endl;
        }
        if (mum == 0)
        {
            cout << num - 1 << "SL" << endl;
        }
    }
}
