// Problem URL : https://codeforces.com/contest/680/problem/B

#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    int n, a;
    cin >> n >> a;
    vector<int> cities;

    for (int i = 0; i < n; i++)
    {
        int c; cin >> c;
        cities.push_back(c);
    }
    a--;

    int counter = (cities[a] == 1) ? 1 : 0;
    int r = a+1, l = a-1;

    while (r<n || l>=0)
    {
        if(r<n && l>=0){
            if(cities[r] == 1 && cities[l] == 1){
                counter += 2;
            }
            r++;
            l--;
        }
        else if(r<n){
            if(cities[r] == 1) counter++;
            r++;
        }
        else{
            if(cities[l] == 1) counter++;
            l--;
        }
    }
    cout << counter << endl;
    
    
    
    return 0;
}