#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int k; cin >> k;

    int l = 0, r = 0;
    long long ans = 0, s = 0;
    while (r<n)
    {
        s += v[r];
        if( r-l+1==k) {
            ans = max(ans,s);
            s -= v[l];
            l++;
        }
        r++;
    }

    cout << ans << endl;
    
    

    return 0;
}