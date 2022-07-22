// Problem URL : https://codeforces.com/contest/766/problem/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    vector<int> seg;

    for (int i = 0; i < n; i++)
    {
        int s; cin >> s;
        seg.push_back(s);
    }

    sort(seg.begin(), seg.end());

    bool isDegenerated = true;

    for (int i = 1; i < n-1; i++)
    {
        if(seg[i-1] + seg[i] > seg[i+1]) isDegenerated = false;
    }

    if(isDegenerated) cout << "NO" << endl;
    else cout << "YES" << endl;
    
    
    
    return 0;
}