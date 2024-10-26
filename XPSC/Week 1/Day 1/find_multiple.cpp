#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,c;
    cin >> a >> b >> c;

    bool  f = false;
    for (int i = a; i <= b; i++)
    {
        if(i%c==0) {
            cout << i;
            f = true;
            break;
        }
    }
    
    if(!f) cout << -1;

    return 0;
}