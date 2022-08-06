#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string t;
    cin >> t;
    int i, j;
    for (i = 0, j = 0; i < t.length(); i++)
    {
        if (t[i] == s[j])
        {
            j++;
        }
    }
    cout << j + 1 << endl;

    return 0;
}