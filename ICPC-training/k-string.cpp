#include <bits/stdc++.h>
using namespace std;

int main()
{

    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    
    int k = 0;
    string s;

    cin >> k;
    cin >> s;

    int d[26] = {0};
    int n = s.length();

    for (int i = 0; i < n; i++)
    {
        int ascii = s[i];
        d[ascii - (int)'a'] += 1;
    }

    string res, subRes = "";  
    bool found = true;

    for (int i = 0; i < 26; i++)
    {
        if(d[i] > 0 && d[i]%k ==0){
            for (int j = 0; j < d[i]/k; j++)
            {
                subRes.push_back((char) (i+(int)'a'));
            }
            
        } else{
            if(d[i]%k !=0){
                found = false; 
                break;
            }
        }
    }

    for (int i = 0; i < k; i++)
    {
        res += subRes;
    }
    
    if(found) cout << res << endl;
    else cout << -1 << endl;
    

    


    

    return 0;
}
