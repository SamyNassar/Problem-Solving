// Problem URL : https://codeforces.com/contest/160/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    int total = 0, taken = 0, counter = 0;
    vector<int> coins;

    for (int i = 0; i < n; i++)
    {
        int c; cin >> c;
        total += c;
        coins.push_back(c);
    }

    sort(coins.begin(), coins.end(), greater<int>());

    auto itr = coins.begin();

    while (true)
    {
        if(taken > total) break;

        taken += *itr;
        total -= *itr;
        counter++;
        itr++;
    }
    
    
    cout << counter << endl;
    
    return 0;
}