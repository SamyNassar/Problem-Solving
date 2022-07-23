
#include <bits/stdc++.h>
using namespace std;

int array_maximum(int arr[], int len){

    if(len == 1) return arr[0];
    return max(arr[len-1], array_maximum(arr, len-1));
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int arr[10] = {188, 2, 5, 6, 88, 7, 10, 5, 12, 16};
    int m = array_maximum(arr, 10);

    cout << m << endl;
    
    return 0;
}