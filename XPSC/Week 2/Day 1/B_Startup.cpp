#include <bits/stdc++.h>
using namespace std;


int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--)
    {
        int n,k; cin >> n >> k;
        unordered_map<int,int> mp;

        for (int i = 0; i < k; i++)
        {
            int b,c;
            cin >> b >> c;

            mp[b] += c;
        }
        long long sum = 0;
        vector<int> v;
        
        for(auto [x,y]:mp)
            v.push_back(y);

        sort(v.begin(),v.end());
        while (n--)
        {
            if(v.empty()) break;

            sum += v.back();
            v.pop_back();
        }
        
        
        cout << sum << endl;
        
    }
    

    return 0;
}