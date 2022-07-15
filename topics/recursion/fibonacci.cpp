#include <bits/stdc++.h>
using namespace std;

map<int, long long int> memo;

long long int fibonacci(int n){

    if(memo.find(n) != memo.end()) return memo[n];

    if(n == 0) return 0;
    if(n == 1) return 1;

    long long int res = fibonacci(n-1) + fibonacci(n-2);

    memo.insert({n, res});

    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n =  80;

    long long res = fibonacci(n);

    cout << res << endl;
    
    return 0;
}