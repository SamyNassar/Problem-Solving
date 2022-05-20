#include <bits/stdc++.h>
using namespace std;

int main()
{

    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    
    int n;
    string sentence;
    int alphabet[26] = {0};
    bool isPangram = true;

    cin >> n;

    cin >> sentence;



    for (int i = 0; i < sentence.length(); i++)
    {
        char c = sentence[i];
        int index = int(tolower(c)) - int('a');
        alphabet[index] = alphabet[index] + 1;
    }

    for (int i = 0; i < 26; i++)
    {
        if(alphabet[i] == 0){
            isPangram = false;
            break;
        }
    }

    if(isPangram) cout << "YES" << endl;
    else cout << "NO" << endl;


    return 0;
}
