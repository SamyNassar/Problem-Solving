#include <bits/stdc++.h>
using namespace std;

int main()
{

    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    
    short int testCases, relative = 0;

    cin >> testCases;

    while (testCases--)
    {
        cin >> relative;
        vector<int> streets;

        for (int i = 0; i < relative; i++)
        {
            short s;
            cin >> s;
            streets.push_back(s);
        }

        sort(streets.begin(), streets.end());

        int res = 0;
        int median = streets[relative / 2];

        for (int i = 0; i < relative; i++)
        {
            res += abs(median - streets[i]);
        }
        

        cout << res << endl;
        
    }

    return 0;
}
