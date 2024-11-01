#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<string,string> mp;
    while (n--)
    {
        string a,b; cin >> a >> b;
        int f = 0;
        for(auto [x,y]:mp) {
            if(a==y) {
                mp[x] = b;
                f = 1;
            }
        }        
        if(!f) mp[a] = b;
    }
    
    cout << mp.size() << '\n';
    for(auto [x,y]:mp)
        cout << x << ' ' << y << endl;

    return 0;
}