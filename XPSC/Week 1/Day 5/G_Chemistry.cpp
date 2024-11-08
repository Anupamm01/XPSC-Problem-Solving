#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

using namespace std;


void solve() {
    int n,k; cin >> n >> k;

    unordered_map<char,int> mp;

    string s; cin >> s;

    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }

    int odd = 0;

    for(auto [x,y]:mp) {
        if(y&1) {
            odd++;
        }
    }
    
    odd -= k;

    if(odd>1) no;
    else yes;
    
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