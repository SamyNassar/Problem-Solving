// Problem URL : https://codeforces.com/contest/463/problem/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    int energy = 0, cost = 0, current_height = 0;

    for (int i = 0; i < n; i++)
    {
        int next_height; cin >> next_height;

        int diff = current_height - next_height;

        if(diff > 0) energy += diff;
        else if(diff < 0)
        {
            energy += diff;
            if(energy < 0)
            {
                cost += abs(energy);
                energy = 0;
            }
        }
        else continue;

        current_height = next_height;
    }
    cout << cost << endl;

    return 0;
}