// Problem URL : https://codeforces.com/contest/810/problem/B

#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, f;
    cin >> n >> f;

    vector<int> basic;
    vector<pair<int, int>> bonus;

    long long ans = 0;

    for (int i = 0; i < n; i++)
    {
        int k, l;
        cin >> k >> l;

        int a = min(2*k, l);
        int b = min(k, l);

        basic.push_back(b);
        bonus.push_back(make_pair(a-b, i));
    }
    
    sort(bonus.begin(), bonus.end(), greater());

    for (int i = 0; i < n; i++)
    {
        long long total = basic[i];

        if(f > 0){
            total += bonus[i].first;
            f--;
        }

        ans += total;
    }
    cout << ans << endl;

    return 0;
}