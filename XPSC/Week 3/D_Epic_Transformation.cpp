#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

using namespace std;


void solve() {
    int n; cin >> n;
    map<int,int> mp;

    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        mp[x]++;
    }

    priority_queue<int> pq;
    for(auto [x,y]:mp) {
        pq.push(y);
    }

    while (!pq.empty())
    {
        if(pq.size()==1) break;

        int x = pq.top();
        pq.pop();
        int y = pq.top();
        pq.pop();

        x--; y--;

        if(x>0) pq.push(x);
        if(y>0) pq.push(y);

    }

    int ans = 0;

    if(!pq.empty()) ans = pq.top();


    cout << ans << endl;
    
    
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}