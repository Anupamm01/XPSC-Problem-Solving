#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    vector<string> v;
    unordered_map<string,bool> mp;
    while (n--)
    {
        string s;
        cin >> s;
        
        v.push_back(s);
        mp[s] = true;
    }
    for (int i = v.size()-1; i >= 0; i--)
    {
        if(mp[v[i]]==true) {
            cout << v[i] << endl;
            mp[v[i]] = false;
        }
        
        
    }
    
    

    return 0;
}