#include <bits/stdc++.h>
using namespace std;


int main(){

    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);


    int x, y, m = 0;
    for (int i = 0; i < 5; i++)
    {
        
        y = 0;
        for (int j = 0; j < 5; j++)
        {
            int num;
            cin >> num;
            if(num == 0){
                y++;
            } else{
                m = abs(x-2) + abs(y-2);
                cout << m << endl;

            }
        }
        x++;
    }
    return 0;
}