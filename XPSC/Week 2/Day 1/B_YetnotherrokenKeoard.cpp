#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        vector<int> si;
        vector<int> ci;

        for (int  i = 0; i < s.size(); i++)
        {
            if(s[i] >= 'a' && s[i] <= 'z' && s[i] != 'b') si.push_back(i);
            if(s[i] >= 'A' && s[i] <= 'Z' && s[i] != 'B') ci.push_back(i);

            if(s[i]=='b') {
                s[i] = ' ';
                if(!si.empty()) {
                    s[si.back()] = ' ';
                    si.pop_back();
                }
            }
            if(s[i]=='B') {
                s[i] = ' ';
                if(!ci.empty()) {
                    s[ci.back()] = ' ';
                    ci.pop_back();
                }
            }
        }

        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] != ' ') cout << s[i];
        }
        cout << endl;

        // for(int v:si)
        //     cout << v << ' ';

        // cout << si.size();
        
        

    }
    

    return 0;
}