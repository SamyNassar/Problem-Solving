// Problem URL : https://codeforces.com/contest/318/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long int n, k; 
    cin >> n >> k;
    long long int odd, even = n/2;
    long long int start = 1;

    odd = (n%2 == 0) ? n/2 : n/2 + 1;

    if(k > odd) {
        start = 2;
        k -= odd;
    }

    long long int res = start;

    for (int i = 0; i < k-1; i++)
    {
        res += 2;
    }

    cout << res << endl;

    return 0;
}