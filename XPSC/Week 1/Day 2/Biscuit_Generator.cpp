#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,t;
    cin >> a >> b >> t;

    int k = t/a;

    cout << b*k;

    return 0;
}