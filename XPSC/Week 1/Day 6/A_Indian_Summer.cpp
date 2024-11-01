#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<string> v;

    int n; cin >> n;
    string s;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        getline(cin, s);
        auto it = find(v.begin(),v.end(),s);
        if(it==v.end()) {
            v.push_back(s);
        } 

    }

    cout << v.size();
    

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    map<pair<string,string>,bool> mp;

    for (int i = 0; i < n; i++)
    {
        string a,b;
        cin >> a >> b;
        mp[{a,b}] = true;
    }



    cout << mp.size();
    

    return 0;
}