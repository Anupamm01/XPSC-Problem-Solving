#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,t; cin >> n;

    string s = "0000";


    int k = 3;
    for (int i = 0; i < 4; i++)
    {
        int ld = n%10;
        s[k] = '0'+ld;
        k--;
        n /= 10;
    }
    

    cout << s;

    return 0;
}