#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

using namespace std;


void solve() {
    int n; cin >> n;
    string a,b; cin >> a >> b;
    
    for (int i = 0; i < n; i++)
    {
        if((a[i]!=b[i])) {
            if(a[i]=='G' && b[i]=='B' || a[i]=='B' && b[i]=='G') {
                continue;
            }
            else {
                no;
                return;
            }
            
        }
    }
    
    yes;

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