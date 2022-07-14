// Problem URL : https://codeforces.com/contest/451/problem/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    int n; cin >> n;
    int l = 0, r = 0;

    vector<int> nums;

    for (int i = 0; i < n; i++)
    {
        int num; cin >> num;
        nums.push_back(num);
    }


    for (int i = 0; i < n-1; i++)
    {
        if(nums[i] > nums[i+1]){
            if(l == 0 && r == 0) l = i;
            r = i+1;
        }

        if(nums[i] < nums[i+1] && l != 0 && r != 0){
            break;
        }
    }

    reverse(nums.begin()+l, nums.begin()+r+1);

    
    
    
    

    if(is_sorted(nums.begin(), nums.end()) || (l==-1 && r==-1)){
        cout << "yes" << endl;
        cout << l+1 << " " << r+1 << endl;
    } 
    else cout << "no" << endl;
    
    
    return 0;
}