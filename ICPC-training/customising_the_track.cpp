#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 


    int t;
    cin >> t;

    while (t--)
    {
        unsigned long long int n, sum = 0;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            sum += temp;
        }

        cout << (sum % n) * (n - sum % n ) << "\n";
    }
    
    return 0;
}
