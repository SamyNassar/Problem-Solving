// Problem URL : https://codeforces.com/contest/79/problem/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    int n, m, k, t;
    cin >> n >> m >> k >> t;

    vector<pair<int, int>> wasted;
    string crops[3] = {"Carrots", "Kiwis", "Grapes"};

    for (int i = 0; i < k; i++)
    {
        int a, b;
        cin >> a >> b;
        wasted.push_back(pair<int, int> (a, b));
    }

    sort(wasted.begin(), wasted.end());

    for (int x = 0; x < t; x++)
    {
        int i, j;
        cin >> i >> j;

        int postion = (i-1)*m + j-1;
        int wasted_counter = 0;
        bool isWasted = false;

        for (int y = 0; y < wasted.size(); y++)
        {
            int curr_i = wasted[y].first;
            int curr_j = wasted[y].second;

            int current_position = (curr_i-1)*m + curr_j-1;

            if(current_position == postion){
                cout << "Waste" << endl;
                isWasted = true;
                break;
            }
            else if(current_position < postion){
                wasted_counter++;
                continue;
            } else{
                break;
            }

        }

        if(! isWasted){
            int crop_index = (postion - wasted_counter) % 3;
            cout << crops[crop_index] << endl;
        }
        

    }
    
    return 0;
}