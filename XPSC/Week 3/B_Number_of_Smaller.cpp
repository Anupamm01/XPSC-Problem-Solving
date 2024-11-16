#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m; cin >> n >> m;

    vector<int> v1(n+1); 
    vector<int> v2(m); 
    vector<int> ans;
    for (int i = 1; i <= n; i++)
    {
        cin >> v1[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> v2[i];
    }
    
    int i=1,j=0;
    while (j<m)
    {
        if(i<=n && v2[j]-v1[i]>0) {
            i++;
        }
        else {
            if(i>n) ans.push_back(n);
            else ans.push_back(i-1);
            j++;
        }
    }
    for(auto v:ans)
        cout << v << ' ';

    return 0;
}