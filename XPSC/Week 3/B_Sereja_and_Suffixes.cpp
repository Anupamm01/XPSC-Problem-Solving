#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin >> n >> m;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    set<int> ss;

    vector<int> ans(n);

    for (int i = v.size()-1; i >= 0; i--)
    {
        ss.insert(v[i]);

        ans[i] = ss.size();
    }

    while (m--)
    {
        int x; cin >> x;
        cout << ans[x-1] << endl;
    }
    


    
    

    return 0;
}