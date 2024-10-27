#include <bits/stdc++.h>
using namespace std;

bool vis[26];
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    memset(vis,false,sizeof(vis));
    

    string s;

    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if(!vis[s[i]-'a']) {
            vis[s[i]-'a'] = true;
        }
    }
    bool f = false;
    for (int i = 0; i < 26; i++)
    {
        if(!vis[i]) {
            cout << char('a' + i);
            f = true;
            break;
        }
    }
    
    if(!f) cout << "None";

    return 0;
}