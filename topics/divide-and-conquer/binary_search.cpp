#include <bits/stdc++.h>
using namespace std;

int binary_search(vector<int> &v, int n, int l, int r){

    if(l > r) return -1;

    int mid = (l+r) / 2;

    if(v[mid] == n) return mid;

    if(v[mid] > n) return binary_search(v, n, l, mid-1);

    return binary_search(v, n, mid+1, r);


}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vector<int> v = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n =  3;

    int res = binary_search(v, n, 0, v.size());


    cout << res << endl;

    
    return 0;
}