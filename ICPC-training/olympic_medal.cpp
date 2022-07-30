// Problem URL : https://codeforces.com/contest/215/problem/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m, k, a, b; 
    cin >> n;

    vector<int> r1, p1, p2;
    
    for (int i = 0; i < n; i++)
    {
        int temp; cin >> temp;
        r1.push_back(temp);
    }
    
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int temp; cin >> temp;
        p1.push_back(temp);
    }

    cin >> k;
    for (int i = 0; i < k; i++)
    {
        int temp; cin >> temp;
        p2.push_back(temp);
    }

    cin >> a >> b;

    sort(r1.begin(), r1.end(), greater());
    sort(p1.begin(), p1.end(), greater());
    sort(p2.begin(), p2.end());

    double r2 = sqrt(p1[0]*b*pow(r1[0], 2) / (a*p2[0] + b*p1[0]));


    cout.precision(13);
    cout << r2 << endl;
    
    return 0;
}