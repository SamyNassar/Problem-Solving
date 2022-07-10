// Problem URL : https://codeforces.com/contest/1702/problem/A

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
        int m; cin >> m;
        int k = 0, c = m;
        int d;

        while ((int) c / pow(10, k) != 0)
        {
            if(c / 10 > 0){
                k++;
                c = (int) c / 10;
            } else{
                break;
            }
        }

        d = m - pow(10, k);
        cout << d << endl;
    }
    
    
    return 0;
}