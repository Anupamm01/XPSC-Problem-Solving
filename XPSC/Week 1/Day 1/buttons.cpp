#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b; cin >> a >> b;

    if(a==b) cout << a+b;
    else {
        if(a>b) cout << 2*a-1;
        else cout << 2*b-1;
    }

    return 0;
}