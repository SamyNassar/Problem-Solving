// Problem URL : https://codeforces.com/contest/766/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string a, b;
    cin >> a >> b;
    int res = 0;


    if(a.size() == b.size()){
        if(a == b) res = -1;
        else res = a.size();

    } else res = max(a.size(), b.size());


    cout << res << endl;

    
    return 0;
}