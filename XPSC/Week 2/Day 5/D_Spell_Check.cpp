#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

using namespace std;


void solve() {
    int n; cin >> n;
    string s; cin >> s;
    unordered_set<char> ss;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        ss.insert(s[i]);
    }
    for(auto v:ss) {
        if(v=='T' || v=='i' || v=='m' || v=='u' || v=='r') cnt++;
    }
    
    cout << ((cnt==5 && n==5)? "YES\n":"NO\n");


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