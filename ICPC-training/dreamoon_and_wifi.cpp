// Problem URL : https://codeforces.com/contest/476/problem/B

#include <bits/stdc++.h>
using namespace std;

double fact(int n){
    if(n == 1) return 1;
    else return n * fact(n-1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string send, receive;
    cin >> send >> receive;

    int n = send.size();

    int s[2] = {0};
    int r[3] = {0};

    for (int i = 0; i < n; i++)
    {
        if(send[i] == '+') s[1]++;
        else s[0]++;

        if(receive[i] == '+') r[1]++;
        else if(receive[i] == '?') r[2]++;
        else r[0]++;

    }

    double res;
    int negative, positive;

    negative = s[0]-r[0];
    positive = s[1]-r[1];

    if(positive<0 || negative<0) res = 0.0;
    else if(positive == 0 & negative == 0) res = 1.0;
    else{
        double occur;

        if(positive == 0 || negative == 0) occur = 1;
        else occur = (fact(r[2]))/ (fact(r[2]-positive) * fact(positive));
        int all =  pow(2, r[2]);
        res = ((double) occur) / ((double) all);

    }

    cout.precision(12);
    cout << fixed << res << endl;
    
    
    return 0;
}