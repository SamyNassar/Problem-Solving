#include <bits/stdc++.h>
#include <vector>
using namespace std;


int main()
{

    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);

    const int ALPHABETS_NUMBER = 26;

    int n, k;
    string s;
    multiset<char> word;

    cin >> n >> k >> s;

    for (char c : s)
    {
        word.insert(c);
    }
    
    int currentChar = int('a');

    while (true)
    {
        if(k == 0) break;
        char c = char(currentChar);

        if(word.count(c) > 0){
            word.erase(word.find(c));
            k--;
            continue;
        } 
        else if(currentChar <= int('z')) currentChar++;
        else break;
    }

    string res = "";

    reverse(s.begin(), s.end());
    for (char c : s){
        auto itr = word.find(c);
        if(itr != word.end()){
            res += c;
            word.erase(itr);
        }
    }
    
 
    reverse(res.begin(), res.end());
    cout << res << endl;

    return 0;
}
