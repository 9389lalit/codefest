#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
        return b;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        ll arr[n][n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i][i];
        }
        int M;
        ll ans = -99999;
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                sum1 = sum1 + arr[i][i + j];
                M = max(ans, sum1);
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                sum2 = sum2 + arr[i + j][j];
                M = max(ans, sum2);
            }
        }
        cout << M << endl;
    }
    return 0;
}