//ॐ नमः शिवाय
#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define assh                               \
    {                                      \
        ios_base ::sync_with_stdio(false); \
        cin.tie(NULL);                     \
        cout.tie(NULL);                    \
    }
int main()
{
    cout << fixed << setprecision(25);
    cerr << fixed << setprecision(10);
    auto start = std::chrono::high_resolution_clock::now();
    int T;
    cin >> T;
    while (T--)
    {
        int n, r, b;
        cin >> n >> r >> b;
        string ans;
        int k = ceilf((r * 1.0) / (b + 1));
        // cout << k << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < k; j++)
            {
                if (ans.length() == n)
                    break;
                ans += 'R';
            }
            if (ans.length() == n)
            {
                break;
            }
            ans += 'B';
        }
        cout << ans << "\n";
    }
    return 0;
}