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
bool Palstring(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != s[s.length() - 1])
        {
            return false;
        }
    }
    return true;
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
        int n, h, m;
        cin >> n >> h >> m;
        int x = 60 * h + m;
        int ans = 2500;
        for (int i = 0; i < n; i++)
        {
            int hr, minu;
            cin >> hr >> minu;
            int p = hr * 60 + minu;
            if(p<x){
                p += 1440;
            }
            ans = min(ans, p - x);
        }
        cout << ans / 60 << " " << ans % 60 << endl;
    }
    return 0;
}