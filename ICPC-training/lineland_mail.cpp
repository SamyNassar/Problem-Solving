// Problem URL : https://codeforces.com/contest/567/problem/A

#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    vector<int> coor;

    for (int i = 0; i < n; i++)
    {
        int c; cin >> c;
        coor.push_back(c);
    }
    
    for (int i = 0; i < n; i++)
    {

        int l = (i-1) % n;
        int r = (i+1) % n;

        if(l == -1) l = n-1;

        int m1 = min(abs(coor[l] - coor[i]), abs(coor[i] - coor[r]));
        int m2 = max(abs(coor[0] - coor[i]), abs(coor[i] - coor[n-1]));

        cout << m1 << ' ' << m2 << endl;
    }
    


    
    return 0;
}