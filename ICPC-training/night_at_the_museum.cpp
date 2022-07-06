// Problem URL : https://codeforces.com/contest/731/problem/A

#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

int main()
{

    int ascii_a = int('a');
    int ascii_z = int('z');
    int currentPointerIndex = ascii_a;
    int counter = 0;


    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        int temp = s[i];
        if(temp > currentPointerIndex){
            int r = temp - currentPointerIndex;
            int l = currentPointerIndex - ascii_a + abs(ascii_z - temp) + 1;
            counter += min(r, l);
            currentPointerIndex = temp;
        } else if (temp < currentPointerIndex) 
        {
            int r = abs(ascii_z - currentPointerIndex) + temp - ascii_a + 1;
            int l = currentPointerIndex - temp;
            counter += min(r, l);
            currentPointerIndex = temp;
        }
        
    }
    
    cout << counter << endl;
    
    return 0;
}
