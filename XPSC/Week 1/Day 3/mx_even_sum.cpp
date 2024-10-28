#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long sum = 0;
    int mn_odd = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if((a[i] & 1) && a[i] < mn_odd ) {
            mn_odd = a[i];
        }
    }

    if(!(sum & 1)) cout << sum;
    else cout << sum-mn_odd;
    
    

    return 0;
}