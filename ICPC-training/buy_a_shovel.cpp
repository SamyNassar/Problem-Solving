// Problem URL : https://codeforces.com/contest/732/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int k, r;
    cin >> k >> r;

    int counter = 1;
    int cost = k;



    while (true)
    {
        if(cost%10 == 0 || cost%10 == r){
            break;
        }

        cost += k;
        counter++;

        
    }

    cout << counter << endl;
    
    
    return 0;
}
