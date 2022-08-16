// Problem URL : https://codeforces.com/contest/469/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n; cin >> n;
    set<int> passed;

    int p; cin >> p;

    for (int i = 0; i < p; i++)
    {
        int l; cin >> l;
        passed.insert(l);
    }

    int a; cin >> a;

    for (int i = 0; i < a; i++)
    {
        int l; cin >> l;
        passed.insert(l);
    }

    if(passed.size() == n) cout << "I become the guy." << endl;
    else cout << "Oh, my keyboard!" << endl;
    


    return 0;
}