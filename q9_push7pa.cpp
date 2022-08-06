#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll int t;
    cin >> t;
    while (t--)
    {
        ll int n;
        cin >> n;
        ll int h[n], max1 = 0, i;
        for (i = 0; i < n; i++)
        {
            cin >> h[i];
        }
        if (n == 1)
        {
            cout << h[0] << endl;
        }
        else
        {
            ll int p = 0, l = 0;
            sort(h, h + n);
            for (int i = n - 1; i >= 1; i--)
            {
                if (h[i] == h[i - 1])
                {
                    p++;
                }
                else
                {
                    if (l < h[i] + p)
                    {
                        l = h[i] + p;
                    }
                    p = 0;
                }
            }
            cout << l << endl;
        }
    }

    return 0;
}