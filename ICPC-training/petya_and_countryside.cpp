// Problem URL : https://codeforces.com/contest/66/problem/B

#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    vector<int> garden;

    for (int i = 0; i < n; i++)
    {
        int g; cin >> g;
        garden.push_back(g);
    }

    int counter = 0;

    for (int i = 0; i < n; i++)
    {
        int temp = 1;
        
        for (int r = i+1; r < n; r++)
        {
            if(garden[r] <= garden[r-1]) temp++;
            else break;
        }

        for (int l = i-1; l >= 0; l--)
        {
            if(garden[l] <= garden[l+1]) temp++;
            else break;
        }

        if(counter < temp) counter = temp;
    }
    cout << counter << endl;
    
    return 0;
}