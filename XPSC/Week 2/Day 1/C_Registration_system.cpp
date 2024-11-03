#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    unordered_map<string,int> mp;
    while (t--)
    {
        string s;
        cin >> s;


        mp[s]++;

        if(mp[s]==1) {
            cout << "OK" << endl;
        } else if(mp[s] > 1) {
            int a = mp[s] - 1;

            string s1;

            while (a)
            {
                int d = a%10;
                s1.push_back('0'+d);
                a /= 10;
            }
            
            reverse(s1.begin(),s1.end());
            
            cout << s + s1 << endl;
        }
    }
    // for(auto [x,y]:mp)
    //     cout << x << ' ' << y << endl;


    // cout << s1;

    return 0;
}