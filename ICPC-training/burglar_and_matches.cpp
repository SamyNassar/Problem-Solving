// Problem URL : https://codeforces.com/contest/16/problem/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m; 
    cin >> n >> m;
    
    multimap<int, int> containers;

    int res = 0;

    for (int i = 0; i < m; i++)
    {
        int temp_c, temp_m; 
        cin >> temp_c >> temp_m;

        containers.insert(pair<int, int> (temp_m, temp_c));
    }

    auto itr = containers.rbegin();

    while (n>0 && itr != containers.rend())
    {
        
        int current_c = itr -> second;
        int current_m = itr -> first;


        if(current_c <= n){
            res += (current_c * current_m);
            n -= current_c;
        }
        else{
            res += (n * current_m);
            n = 0;
        }

        itr++;
    }

    cout << res << endl;

    return 0;
}