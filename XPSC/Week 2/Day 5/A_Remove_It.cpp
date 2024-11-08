#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

using namespace std;


void solve() {
    int n,x; cin >> n >> x;
    vector<int> vec;

    for (int i = 0; i < n; i++)
    {
        int k; cin >> k;
        if(k!=x) {
            vec.push_back(k);
        }
    }
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << ' ';
    }
    
    
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}