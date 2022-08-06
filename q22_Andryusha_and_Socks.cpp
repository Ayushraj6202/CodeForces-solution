#include <bits/stdc++.h>
using namespace std;
int n, i, ans = 0, x;
// copied
set<int> table;
int main()
{

    int n, ans = 0;
    cin >> n;
    int ta = 0;
    for (i = 0; i < 2 * n; i++)
    {
        int x;
        cin >> x;
        // if (table.find(x) == table.end()) // there is no socks of this type on table
        // {
        //     table.insert(x); // put the sock on the table
        // }
        // else // there is already a sock of this type
        // {
        //     table.erase(x); // remove it from the table
        // }
        // ans = max(ans, (int)table.size()); // update the answer
        if(table.count(x)==0){
            table.insert(x);
            ta++;
        }
        else{
            ta--;
            table.erase(x);
        }
        ans = max(ans, ta);
    }
    cout << ans;
    return 0;
}