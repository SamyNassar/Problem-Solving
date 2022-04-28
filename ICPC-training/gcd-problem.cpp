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
        int n;
        cin >> n;

        for (int a = 2; a < n; a++)
        {
            int b = n - a - 1;
            int gcd = 0;

            for (int i = min(a, b); i > 0; i--)
            {
                if(a%i == 0 && b%i == 0){
                    gcd = i;
                    break;
                }
            }
            if(gcd == 1){
                cout << a << ' ' << b << ' ' << 1 << endl;
                break;
            }   
        }
    }
    
    return 0;
}
