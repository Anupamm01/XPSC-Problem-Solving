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
        string s;
        cin >> s;
        int i = 0, j = n-1 , len = 0;
        while (i<=j)
        {
            if(s[i]=='B' && s[j]=='B') {
                len = j-i+1;
                break;
            }
            if(s[i]=='W') i++;
            if(s[j]=='W') j--;
        }

        // int fir = -1, las = -1, len = 0;
        // fir = s.find('B');
        // las = s.rfind('B');

        // len = las-fir+1;
        
        cout << len << endl;
    }
    

    return 0;
}