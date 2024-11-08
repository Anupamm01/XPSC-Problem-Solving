#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

using namespace std;


void solve() {
    int n; cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    for (int i = 0; i < n; i++)
    {
        int mv; cin >> mv;
        while (mv--)
        {
            char c; cin >> c;
            if(c=='D') {
                if(vec[i]==9){
                    vec[i] = 0; continue;
                }
                vec[i]++;
            }
            if(c=='U') {
                if(vec[i]==0) {
                    vec[i] = 9; continue;
                }
                vec[i]--;
            }
        }
    }

    for(auto v:vec)
        cout << v << ' ';
    cout << endl;
    
    
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