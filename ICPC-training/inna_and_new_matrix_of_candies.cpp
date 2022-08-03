// Problem URL : https://codeforces.com/contest/400/problem/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    set<int> pos;

    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        int G, S;
        for (int j = 0; j < m; j++)
        {
            if(str[j] == 'G') G = j;
            else if(str[j] == 'S') S = j;
        }
        pos.insert(S-G);
        
    }
    
    int counter = 0;
    for (auto itr = pos.begin(); itr != pos.end(); itr++)
    {
        if(*itr > 0) counter++;
        else {
            counter = -1;
            break;
        }
    }

    cout << counter << endl;
    
    return 0;
}