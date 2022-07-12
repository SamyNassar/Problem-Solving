// Problem URL : https://codeforces.com/contest/1703/problem/C

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t; cin >>t;

    while (t--)
    {
        int n; cin >> n;
        int sq[n];

        for (int i = 0; i < n; i++)
        {
            int d; cin >> d;
            sq[i] = d;
        }

        for (int i = 0; i < n; i++)
        {
            int l; cin >> l;
            string str; cin >> str;
            int m = 0;

            for(char& c: str){
                if(c == 'D') m++;
                else m--;
            }

            int res = (sq[i] + m) % 10;
            while (res < 0)
            {
                res += 10;
            }
            
            sq[i] = res;
            
        }

        for (int i = 0; i < n; i++)
        {
            cout << sq[i] << ' ';
        }

        cout << "\n";
        
        
        
    }
    
    
    return 0;
}