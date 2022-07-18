// Problem URL : https://codeforces.com/contest/1706/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        vector<int> seq;
        string S(m, 'B');

        for (int i = 0; i < n; i++)
        {
            int a; cin >> a;

            int min_a = min(a, m+1-a);
            int max_a = max(a, m+1-a);

            if(S.at(min_a-1) == 'B') S[min_a-1] = 'A';
            else if (S.at(max_a-1) == 'B') S[max_a-1] = 'A';
            else continue;

        }
        cout << S << endl;
    }
    
    return 0;
}