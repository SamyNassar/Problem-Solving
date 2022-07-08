// Problem URL : https://codeforces.com/contest/136/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{

    unordered_map<int, int> f;
    int n; cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int temp; cin >> temp;
        f[temp] = i;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << f[i] << " ";
    }
    
    
    return 0;
}