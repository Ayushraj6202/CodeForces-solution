#include <bits/stdc++.h>
using namespace std;
// TIME LIMIT ERROR !!
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout << fixed << setprecision(25);
    cerr << fixed << setprecision(10);
    auto start = std::chrono::high_resolution_clock::now();
    long long n, m;
    cin >> n >> m;
    long long vn[n];
    for (long long i = 0; i < n; i++)
    {
        cin >> vn[i];
    }
    for (long long i = 0; i < m; i++)
    {
        long long l, r;
        cin >> l >> r;
        long long sum = 0;
        bool ram = true;
        if (l > r)
        {
            swap(l, r);
            ram = false;
        }
        long long ans = 0;
        for (long long i = l - 1; i < r - 1; i++)
        {
            long long p = vn[i] - vn[i + 1];
            if (p >= 0)
            {
                sum += p;
            }
            else
            {
                ans += fabs(p);
            }
        }
        if (ram)
        {
            cout << sum << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }
    return 0;
}