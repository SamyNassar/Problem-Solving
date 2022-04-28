#include <bits/stdc++.h>
using namespace std;

int main()
{

    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    
    int n;
    string res;
    bool sol = true;
    cin >> n;

    int l[7] = {0};

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        l[temp-1] += 1;
    }
    
    if(l[6] + l[4] > 0){
        sol = false;
    } else{
        if(l[3] > 0 && l[3] <= l[1] && l[3] <= l[0]){
            for (int i = 0; i < l[3]; i++)
            {
                res += "124";
            }
            l[0] -= l[3];
            l[1] -= l[3];
            l[3] = 0;
        }
        if(l[5] > 0 && l[5] <= l[2] + l[1] && l[5] <= l[0]){
            for (int i = 0; i < l[5]; i++)
            {
                if(l[2] > 0){
                    res += "136";
                    l[2] -= 1;
                    l[0] -= 1;
                } 
                else if(l[1] > 0){
                    res += "126";
                    l[1] -= 1;
                    l[0] -= 1;
                }
            }
            l[5] = 0;
        }
    }

    for (int i = 0; i < 7; i++)
    {
        if(l[i] > 0){
            sol = false;
            break;
        }
    }
    


    if(sol){
        for (int i = 0; i < n; i+=3)
        {
            cout << res[i] << ' ' << res[i+1] << ' ' << res[i+2] << ' ' << endl; 
        }
    } else{
        cout << -1 << endl;
    }
    
    


    return 0;
}
