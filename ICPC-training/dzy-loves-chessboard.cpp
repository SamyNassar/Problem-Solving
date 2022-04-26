#include <bits/stdc++.h>
using namespace std;


int main(){

    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);

    int n, m = 0;
    cin >> n >> m;
    cin.ignore();
    string board[n];

    for (int i = 0; i < n; i++)
    {
        string str;
        getline(cin, str);
        board[i] = str;

    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(board[i][j] == '.'){
                if((i+j) % 2 == 0){
                    cout << 'B';
                }else {
                    cout << 'W';
                }
            }else cout << board[i][j];
        }
        cout << endl;

    }
    return 0;
}