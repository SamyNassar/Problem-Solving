#include <bits/stdc++.h>
using namespace std;

int main()
{

    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    
    short int t = 0;
    short int n = 0;


    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        vector<int> S;
        int k = 0;

        // Read array elements
        for (int j = 0; j < n; j++)
        {
            int temp = 0;
            cin >> temp;
            S.push_back(temp);

        }
        

        bool exists;

        for (int x = 1; x <= 1024; x++)
        {
            exists = false;
            
            k = x;

            for (int y = 0; y < n; y++)
            {
                int target = (k^S[y]);

                exists = find(S.begin(), S.end(), target) != S.end();
                
                if(!exists){
                    break;
                }
            }

            if(exists){
                break;
            }
        
            
        }
        
        if(exists){
            cout << k << endl;
        } else
        {
            cout << -1 << endl;
        }
        
    }
    

    return 0;
}
