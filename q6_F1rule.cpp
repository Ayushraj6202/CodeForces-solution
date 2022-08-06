#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x>>y;
        int k = x * 107 / 100;
        if (y<=k)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
        
    }
    
    return 0;
}