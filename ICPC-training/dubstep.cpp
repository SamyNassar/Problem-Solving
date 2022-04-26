#include <bits/stdc++.h>
using namespace std;


int main(){

    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);

    string remixed, original;
    getline(cin, remixed);

    bool isSpace = false;

    int n = remixed.length();
    int index = 0;

    for (int i = 0; i < n; i++)
    {
        
        string sub = remixed.substr(i, 3);
        
        if(remixed.substr(i, 3) =="WUB"){
            if(isSpace){
                original.push_back(' ');
                isSpace = false;
            }
            i += 2;

        } 
        else{
            original.push_back(remixed[i]);
            isSpace = true;
        }

    }
    
    cout << original << endl;
    
    return 0;
}