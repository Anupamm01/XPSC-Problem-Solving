#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m; cin >> n >> m;
    map<int,int> mp;

    vector<int> v1(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
        mp[v1[i]]++;
    }

    long long cnt = 0;
    for (int j = 0; j < m; j++)
    {
        int x; cin >> x;
        cnt += mp[x];
    }

    cout << cnt;

    return 0;
}

//2nd approach

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m; cin >> n >> m;

    vector<int> v1(n), v2(m);

    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> v2[i];
    }

    int i = 0, j = 0;
    long long s = 0;

    while (i<n and j<m)
    {
        int curr = v1[i], cnt1 = 0, cnt2 = 0;

        while (i<n and curr==v1[i])
        {
            cnt1++, i++;
        }

        while (j<m and curr>v2[j])
        {
            j++;
        }
        

        while (j<m and curr==v2[j])
        {
            cnt2++, j++;
        }
        
        s += (1LL * cnt1 * cnt2);
    }
    
    cout  << s << endl;
    

    return 0;
}