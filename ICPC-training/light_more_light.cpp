// Problem URL : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1051

#include <bits/stdc++.h>
using namespace std;

int main()
{
    while (true)
    {
        unsigned int n ; 
        cin >> n;

        if(n == 0) break;

        int sq = (int) sqrt(n);

        cout << ((sq*sq == n) ? "yes" : "no") << endl;
    }
    return 0;
}
