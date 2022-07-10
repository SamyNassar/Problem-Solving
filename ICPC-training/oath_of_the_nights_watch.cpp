// Problem URL : https://codeforces.com/contest/768/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    int n; cin >> n;
    map<int, int> strength;

    for (int i = 0; i < n; i++)
    {
        int s; cin >> s;
        if(strength.count(s)) strength[s]++;
        else strength.insert(pair<int, int> (s, 1));

    }
    
    int counter;

    if (strength.size() > 1){
        counter = n;

        auto start_itr = strength.begin();
        auto last_itr = --strength.end();

        counter -= start_itr -> second;
        counter -= last_itr -> second;

    } else counter = 0;

    

    cout << counter << endl;
    
    return 0;
}