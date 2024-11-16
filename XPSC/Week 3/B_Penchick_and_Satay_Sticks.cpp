#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

using namespace std;


void solve() {
    int n; cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n-1; i++)
    {
        if(v[i]-v[i+1]==1) {
            swap(v[i],v[i+1]);
        }
    }

    int c = 1;
    for (int i = 0; i < n; i++)
    {
        if(v[i]!=c) {
            no;
            return;
        }
        c++;
    }
    
    yes;
    
    
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}