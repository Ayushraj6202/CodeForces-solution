#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin >> k;
    int l;
    cin >> l;
    int p,t;
    int flag = 0;

    for (int i = 1;i<33 ;  )
    {
         p = pow(k, i);
        //  cout << p << endl;
         t = i;
         if (l == p)
         {
             flag = 1;
             break;
        }
        i++;
    }

    if (flag == 0)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n"
             << t-1 << endl;
    }

    return 0;
}