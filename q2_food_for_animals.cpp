#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;
        if (c == 0 && a >= x && b >= y)
        {
            cout << "YES\n";
        }
        else if (c == 0 && (a < x || b < y))
        {
            cout << "NO\n";
        }
        else if (b >= y)
        {
            if (a + c >= x)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
        else if (a >= x)
        {
            if (b + c >= y)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
        else if (a < x && b < y)
        {
            if (a + c >= x)
            {
                c = c - (x - a);
                if (b + c >= y)
                {
                    cout << "YES\n";
                }
                else
                {
                    cout << "NO\n";
                }
            }
            else if ((b + c) >= y)
            {
                c = c - (y - b);
                if (a + c >= x)
                {
                    cout << "YES\n";
                }
                else
                {
                    cout << "NO\n";
                }
            }

            else
            {
                cout << "NO\n";
            }
        }

        else if (a < x)
        {
            if (a + c >= x && (a + c - x + b) >= y)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
        else if (b < y)
        {
            if (b + c >= y && (b + c - y + a) >= x)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
        else
        {
            cout << "NO\n";
        }
        // short solution
/*#include <bits/stdc++.h>
using namespace std ;
   int main()
         {
           ios_base::sync_with_stdio(false);
           int t ;
           cin >> t;
            while(t) {

            int a , b , c , x , y ;
            cin >> a >> b >> c >> x >> y ;
            a = max ( 0 , x - a );
            b = max ( 0 , y - b );
            if ( c >= a + b )
            {
                cout << "YES";
            }
            else{ cout <<"NO";}
        
            t--; cout <<endl;
         }
      return 0;
}*/
    }

    return 0;
}