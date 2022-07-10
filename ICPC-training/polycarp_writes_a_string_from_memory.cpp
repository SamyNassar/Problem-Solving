// Problem URL : https://codeforces.com/contest/1702/problem/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        auto itr = S.begin();
        int days = 1;
        while (itr != S.end())
        {
            string temp = "";
            int r = 3;
            while (itr != S.end())
            {
                if(temp.find(*itr) != string::npos){
                    temp += *itr;
                    itr++;
                } else if(r>0){
                    temp += *itr;
                    itr++;
                    r--;
                } else{
                    days++;
                    break;
                }
            }
        }
        cout << days << endl;
    }
    return 0;
}