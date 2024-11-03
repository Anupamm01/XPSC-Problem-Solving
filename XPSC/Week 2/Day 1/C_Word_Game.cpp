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
        vector<vector<string>> v(3);

        unordered_map<string,int> mp;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                string s; cin >> s;
                v[i].push_back(s);
                mp[s]++;
            }
        }

        int a,b,c;
        a = b = c = 0;


        for(string s:v[0]) {
            if(mp[s]==1) a+=3;
            else if (mp[s]==2) a+=1;
        }

        for(string s:v[1]) {
            if(mp[s]==1) b+=3;
            else if (mp[s]==2) b+=1;
        }

        for(string s:v[2]) {
            if(mp[s]==1) c+=3;
            else if (mp[s]==2) c+=1;
        }

        cout << a << ' ' << b << ' ' << c << endl;
        

        
        

    }
    

    return 0;
}