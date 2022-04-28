#include <bits/stdc++.h>
using namespace std;

int main()
{

    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    
    int tc;
    cin >> tc;

    while (tc--)
    {
        int a;
        cin >> a;

        if(360%(180-a) == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
