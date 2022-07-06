// Problem URL : https://codeforces.com/contest/268/problem/A

#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{

    int n, count = 0;
    vector<int> home, guest;


    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int h, g;
        cin >> h >> g;

        home.push_back(h);
        guest.push_back(g);

    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(guest[i] == home[j]){
                count++;
            }
        }
        
    }
    
    cout << count << endl;
    
    
    return 0;
}

