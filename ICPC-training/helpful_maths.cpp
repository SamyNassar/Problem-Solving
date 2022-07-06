// Problem URL : https://codeforces.com/contest/339/problem/A


#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    string S; cin >> S;
    int c1 = 0, c2 = 0, c3 = 0;

    for (char &s : S)
    {
        if(isdigit(s)){
            int x = s - '0';
            if(x == 1) c1++;
            else if (x == 2) c2++;
            else c3++;

        }
    }


    for (int i = 0; i < S.size(); i+=2)
    {
        if(c1>0) {S[i] = '1'; c1--; continue;}
        if(c2>0) {S[i] = '2'; c2--; continue;}
        if(c3>0) {S[i] = '3'; c3--; continue;}


    }

    cout << S << endl;
    
    return 0;
}