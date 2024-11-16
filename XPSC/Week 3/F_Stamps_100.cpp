#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string a; cin >> a;

        for (int i = 0; i < n-2; i++)
        {
            if(a[i]>='1' && a[i+1]>='0' && a[i+2]>='0') {
                a[i] = '1', a[i+1] = '0' , a[i+2] = '0';
            }
        }
        cout << a << endl;
    }
    

    return 0;
}