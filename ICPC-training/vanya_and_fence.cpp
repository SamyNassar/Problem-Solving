// Problem URL : https://codeforces.com/contest/677/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, h;
    int counter = 0;
    vector<int> heights;
    cin >> n >> h;
    
    for (int i = 0; i < n; i++)
    {
        int height;
        cin >> height;
        heights.push_back(height);
    }
    
    for (int i = 0; i < heights.size(); i++)
    {
        if(heights[i] <= h){
            counter++;
        }
        else{
            counter += 2;
        }
    }
    
    cout << counter << endl;
    
    return 0;
}