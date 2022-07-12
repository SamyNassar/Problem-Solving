// Problem URL : https://codeforces.com/contest/1703/problem/D

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
        int n; cin >> n;
        string res = "";
        vector<string> strs;
        unordered_set<string> S;


        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            strs.push_back(s);
            S.insert(s);
        }

        
        for (int i = 0; i < n; i++)
        {
            string current = strs[i];
            vector<string> comb;
            bool isFound = false;

            for (int i = 0; i < current.size(); i++)
            {
                string s1 = current.substr(0,i+1);
                string s2 = current.substr(i+1, current.size());
                comb.push_back(s1);
                comb.push_back(s2);
            }
            

            for (int i = 0; i < comb.size()-2; i+= 2)
            {
                string s1 = comb[i];
                string s2 = comb[i+1];


                if(S.find(s1) != S.end() && S.find(s2) != S.end()){ 
                    isFound = true;
                    break;
                }
            }

            if (isFound) res.push_back('1');
            else res.push_back('0');
        }

        cout << res << endl;
    }
    
    return 0;
}