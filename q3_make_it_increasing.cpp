#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
   ll int t;
    cin >> t;
    while (t)
    {

       long long  int n;
        cin >> n;
        long long int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
       long long  int number = 0;
       long long  int stop = 1,i;
        for (i = n - 2; i >= 0; i--)
        {
           while (a[i] >= a[i + 1]) {
				if (a[i] == 0 && a[i] == a[i + 1]) {
					stop = 0;
					break;
				}
				a[i] /= 2;
				number++;
			}
			if (stop == 0)break;
        }
        if (stop == 1)
        {
            cout << number;
        }
        else
        {
            cout << "-1\n";
        }
        
        t--;
        cout << endl;
    }
    return 0;
}