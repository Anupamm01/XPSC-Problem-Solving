#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin >> n >> m;

    unordered_map<string,string> mp;
    while (n--)
    {
        string n,ip;
        cin >> n >> ip;


        mp[ip] = n;
    }

    while (m--)
    {
        string a,b;
        cin >> a >> b;
        b.pop_back();

        cout << a << ' ' << b+';' << ' ' << '#' + mp[b] << endl;
    }
    
    

    return 0;
}