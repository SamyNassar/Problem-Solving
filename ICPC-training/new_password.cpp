// Problem URL : https://codeforces.com/contest/770/problem/A


#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<char> usedChar;
    int lastUsedCharIndex = 0;
    string password = "";

    for (int i = 0; i < k; i++)
    {
        char c = (char) int('a') + i;
        password += c;
        usedChar.push_back(c);
    }

    for (int i = 0; i < n-k; i++)
    {

        if(lastUsedCharIndex == usedChar.size()){
            lastUsedCharIndex = 0;
        }

        char c = usedChar[lastUsedCharIndex];
        password += c;
        lastUsedCharIndex++;
    }
    
    cout << password << endl;
    
    return 0;
}


