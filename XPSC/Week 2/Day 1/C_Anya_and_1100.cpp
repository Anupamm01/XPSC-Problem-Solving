#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        int q; cin >> q;
        while (q--)
        {
            int i,v; cin >> i >> v;
            if(v==1) {
                s.insert(s.begin()+i-1,'1');
            } else {
                s.insert(s.begin()+i-1,'0');
            }
            // cout << s << ' ';
            bool f = false;
            for (int i = 0; i < s.size()-3; i++)
            {
                if(s[i]=='1' && s[i+1]=='1' && s[i+2]=='0' && s[i+3]=='0') f = true;
            }
            cout << ((f)?"YES\n":"NO\n");
             
        }
        
    }
    

    return 0;
}