#include <bits/stdc++.h>

using namespace std;


int main(){

    unsigned int n, m, k = 0;
    cin >> n;

    unsigned short int numOfDigit = log10(n) + 1;
    
    for (int i = 0; i < numOfDigit; i++)
    {
        int currentDigit = n % 10;
        n /= 10;

        if(currentDigit == 7){
            k += pow(2, i);
        }
        
        m += pow(2, i);
    }

    cout << m + k  << "\n";
}