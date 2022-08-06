#include <bits/stdc++.h>
using namespace std ;
int main()
{
ios_base::sync_with_stdio(false);
int t ;
cin >> t;
while(t) {

    string str ;
    cin >> str ;
    int zero = str.size() - 1 , one = 0 ;
    for ( int i = 0; i < str.size(); i++)
    {
        if ( str[i] == '0')
        {
            zero = i ;
            break;
        }        
    }
    for ( int i = str.size() - 1 ; i >= 0 ; i--)
    {
        if ( str[i] == '1')
        {
            one  = i ;
            break;
        }        
    }
    cout << zero - one + 1;
            
    t--; cout <<endl;
}
 return 0;
}