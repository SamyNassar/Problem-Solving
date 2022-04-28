#include <bits/stdc++.h>
using namespace std;


int main(){

    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);


    int n, a, b, c, res = 0;
    cin >> n >> c >> b >> a;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if((n - a*i - b*j)%c == 0){
                int k = (n - a*i - b*j) / c;

                if(a*i + b*j + c*k == n && k >= 0) res = max(res, i+j+k);

            }
            
        }
        
    }
    
    cout << res << endl;


    return 0;
}