#include <bits/stdc++.h>
using namespace std;

int main()
{

    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    
    short n;
    cin >> n;

    vector<int> a;

    for (int i = 0; i < n; i++)
    {
        int temp = 0;
        cin >> temp;
        a.push_back(temp);
    }

    int x, y, z = 0;
    bool found = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            auto it = find(a.begin(), a.end(), a[i]+a[j]);

            if(it != a.end()){
                x = i+1;
                y = j+1;
                z = it - a.begin() +1;

                found = true;
                break;
            }

        }

        if(found) break;
    }

    if(found){
        cout << z << " " << x << " "  << y <<endl;
    } else{
        cout << -1 << endl;
    }
    
    


    return 0;
}
