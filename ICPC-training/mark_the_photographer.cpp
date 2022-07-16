// Problem URL : https://codeforces.com/contest/1705/problem/0

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;

        vector<int> people;

        bool ans = true;

        for (int i = 0; i < n*2; i++)
        {
            int p; cin >> p;
            people.push_back(p); 
        }

        sort(people.begin(), people.end());

        for (int i = 0; i < n; i++)
        {
            if(people[n+i] - people[i] < x){
                ans = false;
                break;
            }
        }

        cout << (ans ? "YES" : "NO") << endl;
    }
       
    return 0;
}