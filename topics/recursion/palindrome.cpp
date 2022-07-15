#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str){

    int n = str.size();

    if(n == 0 || n == 1) return true;

    if(str.at(0) == str.at(n-1)) return isPalindrome(str.substr(1, n-2));

    return false;

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    bool res1 = isPalindrome("level");
    bool res2 = isPalindrome("mountain");
    bool res3 = isPalindrome("radar");
    bool res4 = isPalindrome("c++");

    cout << (res1 ? "true" : "false") << endl;
    cout << (res2 ? "true" : "false") << endl;
    cout << (res3 ? "true" : "false") << endl;
    cout << (res4 ? "true" : "false") << endl;
    
    return 0;
}