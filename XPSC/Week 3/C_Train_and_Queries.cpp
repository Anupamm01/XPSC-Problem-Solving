#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

using namespace std;


void solve() {
    int n,k; cin >> n >> k;

    map<int,int> mp;
    map<int,int> mpp;

    for(int i=1; i<=n; i++) {
        int x; cin >> x;
        if(!mp[x]) mp[x] = i;  

        mpp[x] = i;
    }

    while(k--) {
        int a,b; cin >> a >> b;

        if(!mp[a] || !mp[b]) no;
        else if(mp[a]<mpp[b]) yes;
        else no;

    }

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