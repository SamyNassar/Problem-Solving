#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);

    string board[4];
    bool res = false;
    
    for (int i = 0; i < 4; i++)
    {
        getline(cin, board[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int c = 1;
            if(board[i][j] == board[i][j+1]) c++;
            if(board[i][j] == board[i+1][j]) c++;
            if(board[i][j] == board[i+1][j+1]) c++;

            if(c >= 3 || c == 1){
                res = true;
                break;
            }
                

        }
        if(res) break;
        
    }

    if(res) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    
    
    
    return 0;
}
