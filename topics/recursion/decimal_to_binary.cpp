#include <bits/stdc++.h>
using namespace std;

string decimal_to_binary(int decimal){

    if(decimal/2 == 0) return to_string(decimal%2);
    
    return decimal_to_binary(decimal/2) + to_string(decimal%2);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s = decimal_to_binary(1024);
    cout << s << endl;
    
    return 0;
}