#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int x;
        cin >> x;
        int a, b, c;
        cin >> a >> b >> c;
        if (x == 1)
        {
            if (a == 0)
            {
                cout << "NO\n";
                continue;
            }
            else
            {
                if (b == 0)
                {
                    if (a == 3)
                    {
                        cout << "YES\n";
                    }
                    else
                    {
                        cout << "NO\n";
                    }
                }
                else if (c == 0)
                {
                    if (a == 2)
                    {
                        cout << "YES\n";
                    }
                    else
                    {
                        cout << "NO\n";
                    }
                }
            }
        }
        else if (x == 2)
        {
            if (b == 0)
            {
                cout << "NO\n";
                continue;
            }
            else
            {
                if (a == 0)
                {
                    if (b == 3)
                    {
                        cout << "YES\n";
                    }
                    else
                    {
                        cout << "NO\n";
                    }
                }
                else if (c == 0)
                {
                    if (b == 1)
                    {
                        cout << "YES\n";
                    }
                    else
                    {
                        cout << "NO\n";
                    }
                }
            }
        }
        else if (x == 3)
        {
            if (c == 0)
            {
                cout << "NO\n";
                continue;
            }
            else
            {
                if (a == 0)
                {
                    if (c == 2)
                    {
                        cout << "YES\n";
                    }
                    else
                    {
                        cout << "NO\n";
                    }
                }
                else if (b == 0)
                {
                    if (c == 1)
                    {
                        cout << "YES\n";
                    }
                    else
                    {
                        cout << "NO\n";
                    }
                }
            }
        }
    }
    return 0;
}