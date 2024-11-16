#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;


    vector<long long> v;

    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        mp[x]++;
    }

    for(auto [x,y]:mp) {
        v.push_back(y);
    }

    reverse(v.begin(),v.end());

    int cnt = n, ext = 0;
    for (int i = 0; i < v.size()-1; i++)
    {
        if(v[i]>=v[i+1]) {
            cnt -= v[i+1];
            ext += v[i]-v[i+1];
        }
        else {
            cnt -= v[i];
            if(v[i+1]-v[i]<=ext) {
                ext -= v[i+1]-v[i];
                cnt -= v[i+1]-v[i];
            }
        }
    }

    cout << cnt;
    



    return 0;
}