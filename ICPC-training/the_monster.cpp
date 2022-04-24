#include <bits/stdc++.h>
using namespace std;

int main()
{

    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    
    short int a, b, c, d = 0;

    cin >> a >> b;
    cin >> c >> d;

    short int monsterChasingTime = -1;

    vector<int> rickScream;

    for (int i = 0; i <= 100; i++)
    {
        rickScream.push_back(b + i * a);
    }
    
    
    for (int i = 0; i <= 100; i++)
    {
        short mortyScreem = d + i * c;
        if(find(rickScream.begin(), rickScream.end(), mortyScreem)!=rickScream.end()){
            monsterChasingTime = mortyScreem;
            break;
        }
    }

    

    
    cout << monsterChasingTime << endl;

    return 0;
}
