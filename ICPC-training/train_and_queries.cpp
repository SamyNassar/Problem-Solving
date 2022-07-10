// Problem URL : https://codeforces.com/contest/1702/problem/C

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;

    while (t--)
    {
        cin.get();
        int n, k; 
        cin >> n >> k;

        map<int, vector<int>> stations;

        for (int i = 0; i < n; i++)
        {
            int s; cin >> s;
            
            if(stations.find(s) != stations.end()){
                vector<int> temp = stations[s];
                temp.push_back(i);
                stations[s] = temp;
            } else {
                vector<int> temp;
                temp.push_back(i);
                stations.insert(pair<int, vector<int>> (s, temp));
            }
        }

        for (int i = 0; i < k; i++)
        {
            int a,b;
            cin >>a >>b;

            if(stations.find(a) != stations.end() and stations.find(b) != stations.end()){
                vector<int> v_a = stations[a];
                vector<int> v_b = stations[b];
                
                int min_a = *min_element(v_a.begin(), v_a.end());
                int max_b = *max_element(v_b.begin(), v_b.end());

                if (min_a < max_b) cout << "YES" << endl;
                else cout << "NO" << endl;

            } else cout << "NO" << endl;
            }
        
        
        
    }
    
    
    return 0;
}