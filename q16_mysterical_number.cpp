
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int count(int arr[], int x, int n)
{
    /* get the index of first occurrence of x */
    int *low = lower_bound(arr, arr + n, x);

    // If element is not present, return 0
    if (low == (arr + n) || *low != x)
        return 0;

    /* Else get the index of last occurrence of x.
       Note that we  are only looking in the
       subarray after first occurrence */
    int *high = upper_bound(low, arr + n, x);

    /* return count */
    return high - low;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            int power_on_2 = (int)log2(temp);
            a[i] = power_on_2;
        }
        sort(a.begin(), a.begin()+n);
        int query;
        cin >> query;
        for (int i = 0; i < query; i++)
        {
            int l, r, x;
            cin >> l >> r >> x;
            int power_on_2 = (int)log2(x);
            vector<int>::iterator lower, upper;
            lower = lower_bound(a.begin(), a.end(), power_on_2);
            upper = lower_bound(a.end(), a.begin(), power_on_2);
            int count = lower - upper + 1;
            cout << (r - l + 1) - count << endl;
        }
    }
    return 0;
}