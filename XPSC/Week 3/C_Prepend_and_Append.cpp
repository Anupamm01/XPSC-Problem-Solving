#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

using namespace std;


void solve() {
    int n; cin >> n;
    string s; cin >> s;

    int i = 0, j = n-1;

    while (i<=j)
    {
        if(s[i]!=s[j]) {
            i++;
            j--;
        }
        else {
            cout << j-i+1 << endl;
            return;
        }
    }
    
    cout << 0 << endl;

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