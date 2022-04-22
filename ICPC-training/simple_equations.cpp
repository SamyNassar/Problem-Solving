#include <bits/stdc++.h>
using namespace std;

int main()
{

    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    
    int a, b, c = 0;
    
    int n = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {

        bool sol = false;
        cin >> a >> b >> c;

        // Range of x is from -100 to 100 to make x*x <= 10000.
        for (int x = -100; x <= 100; x++)
        {

            for (int y = -100; y <= 100; y++)
            {
                if(x != y && ((a-x-y) * (a-x-y) == c - x*x - y*y)){
                    
                    // Avoid division by zero.
                    if(x*y == 0){
                        continue;
                    }

                    int z = b / ( x * y );

                    if( x != z && y != z && x+y+z == a && x*y*z == b && x*x+y*y+z*z == c ){
                        cout << x << " " << y << " " << z << endl;
                        sol = true;
                        break;
                    }
                }
                
            }
            if(sol){
                break;
            }
            
        }

        if(!sol){
            cout << "No solution." << endl;
        }
    }
    
    return 0;
}
