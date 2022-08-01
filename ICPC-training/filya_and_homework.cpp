// Problem URL : https://codeforces.com/contest/714/problem/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    set<int> nums;

    for (int i = 0; i < n; i++)
    {
        int t; cin >> t;
        nums.insert(t);
    }

    bool res = false;
    if(nums.size() == 3){
        int x = *next(nums.begin(),1) - *nums.begin();
        int y = *next(nums.begin(),2) - *next(nums.begin(),1);
        if(x == y) res = true;
    }
    else if(nums.size() < 3) res = true;

    if(res) cout << "YES" << endl;
    else cout << "NO" << endl;

    
    return 0;
}