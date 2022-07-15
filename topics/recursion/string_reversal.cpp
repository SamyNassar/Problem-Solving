#include <bits/stdc++.h>
using namespace std;

string reversal(string str){

    if(str.size() == 1) return str;

    char c = str[0];

    return reversal(str.substr(1)) + c;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s = reversal("string_reversal");

    cout << s << endl;
    
    return 0;
}