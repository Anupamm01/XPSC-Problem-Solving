#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<string> v;
    map<string,int> mp;

    for (int i = 0; i < n; i++)
    {
        string s; cin >> s;
        v.push_back(s);
        mp[s]++;
        if(mp[s]<2) cout << "NO\n";
        else cout << "YES\n";
    }


    

    return 0;
}