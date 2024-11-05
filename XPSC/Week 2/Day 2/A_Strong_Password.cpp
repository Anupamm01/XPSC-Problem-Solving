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

        bool f = false;
        for (int i = 0; i < s.size()-1; i++)
        {
            if(s[i]==s[i+1]) {
                if(s[i]!='z') {
                    s.insert(s.begin()+i+1,s[i]+1);
                    f = true;
                    break;
                }
                else{
                    s.insert(s.begin()+i+1,s[i]-1);
                    f = true;
                    break;
                }
            }
        }

        if(!f) {
            if(s[s.size()-1]!='z') s.push_back(s[s.size()-1]+1);
            else s.push_back(s[s.size()-1]-1);

        }

        cout << s << endl;
        
    }
    

    return 0;
}