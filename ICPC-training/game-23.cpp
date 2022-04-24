#include <bits/stdc++.h>
using namespace std;

int main()
{

    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    
    int n, m, d, counter = 0;

    cin >> n >> m;

    

    if(m%n == 0){
        d = m/n;

        while (d)
        {
            if(d == 0 || d == 1){
                cout << counter <<endl;
                break;
            }

            if(d%2 == 0){
                d /= 2;
                counter += 1;
            }
            else if (d%3 == 0)
            {
                d /= 3;
                counter += 1;
            } 
            else{
                cout << -1 <<endl;
                break;
            }
        }

    }else{
        cout << -1 <<endl;
        
    }

    return 0;
}
