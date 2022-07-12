// Problem URL : https://codeforces.com/contest/1703/problem/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    int ascii_A = int('A');

    while (t--)
    {
        int prob[26] = {0};
        int counter = 0;
        int n; cin >> n;
        string s; cin >> s;

        for (int i = 0; i < n; i++)
        {
            int current = int(s[i]) % ascii_A;

            if(prob[current] == 0){
                counter += 2;
                prob[current] = 1;
            } else counter++;


        }
        cout << counter << endl;
    }
    
    return 0;
}