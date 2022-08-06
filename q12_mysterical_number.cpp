#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int q;
        cin >> q;
        while (q--)
        {
            int l, r, x;
            cin >> l >> r >> x;
            int count = 0;
            for (int i = l - 1; i < r; i++)
            {
                if ((a[i] ^ x) > (a[i] & x))
                {
                    count++;
                }
            }
            cout << count << endl;
        }
    }

    return 0;
}