#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }


    sort(v.begin(),v.end());

    int cnt = 0;

    int d = 1;
    for (int i = 0; i < n; i++)
    {
        if(d<=v[i]) {
            cnt++;
            d++;
        }
    }

    cout << cnt ;
    

    
    

    return 0;
}