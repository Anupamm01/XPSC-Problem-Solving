#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;

        string s; cin >> s;

        set<char>ss;
        for(char c:s) {
            ss.insert(c);
        }

        vector<char> v;

        for(char c:ss) {
            v.push_back(c);
        }

        unordered_map<char,char> mp;

        int i = 0, j = v.size()-1;

        while (i<=j)
        {
            mp[v[i]] = v[j];
            mp[v[j]] = v[i];
            i++, j--;
        }

        // cout << s;

        // for(auto [x,y]:mp)
        //     cout << x << "->" << y << endl;

        // for(auto a:v) cout << a;

        for (int i = 0; i < n; i++)
        {
            s[i] = mp[s[i]];
        }

        cout << s << endl;
        
        
    }
    

    return 0;
}