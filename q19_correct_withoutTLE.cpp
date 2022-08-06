#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        a.push_back(k);
    }
    vector<long long> p(n), q(n);
    for (int i = 1; i < n; ++i)
    {
        p[i] = p[i - 1] + max(0, a[i - 1] - a[i]);
    }
    for (int i = n - 2; i >= 0; --i)
    {
        q[i] = q[i + 1] + max(0, a[i + 1] - a[i]);
    }

    for (int i = 0; i < m; ++i)
    {
        int s, t;
        cin >> s >> t;
        --s;
        --t;
        if (s <= t)
        {
            cout << p[t] - p[s] << '\n';
        }
        else
        {
            cout << q[t] - q[s] << '\n';
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout << fixed << setprecision(25);
    cerr << fixed << setprecision(10);
    auto start = std::chrono::high_resolution_clock::now();
    int T=1;
    // cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}