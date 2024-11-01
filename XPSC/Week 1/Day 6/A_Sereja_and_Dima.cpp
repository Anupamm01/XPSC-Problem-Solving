#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    deque<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int sereja = 0, dima = 0; bool f = true;

    while (!v.empty())
    {
        int x = 0;
        if(v[0]>v[v.size()-1]) {
            x = v[0];
            v.pop_front(); //O(1)
        } else {
            x = v[v.size()-1];
            v.pop_back(); //O(1)
        }
        
        if(f) {
            sereja += x; f = false;
        } else {
            dima += x;
            f = true;
        }
        
    }
    
    cout << sereja << ' ' << dima;
    
    

    return 0;
}


// 2nd approach

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int i = 0, j = n-1;

    int s = 0, d = 0; bool f = true;

    while (i<=j)
    {
        int x = 0;
        if(a[i]>a[j]) {
            x = a[i];
            i++;
        } else {
            x = a[j];
            j--;
        }
        if(f) {
            s += x;
            f = false;
        } else {
            d += x;
            f = true;
        }
    }

    cout << s << ' ' << d;
    
    
    

    return 0;
}