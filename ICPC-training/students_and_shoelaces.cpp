// Problem URL : https://codeforces.com/contest/129/problem/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m; cin >> n >> m;
    vector<set<int>> tied(n+1);
    set<int> students;
    int counter = 0;

    for (int i = 0; i < m; i++)
    {
        int a, b; cin >> a >> b;
        tied[a].insert(b);
        tied[b].insert(a);
        students.insert(a);
        students.insert(b);
    }

    while (1)
    {
        vector<int> kicked;
        for (int i = 1; i <= n; i++)
        {
            if(tied[i].size() == 1){
                kicked.push_back(i);
            }
        }
        if(kicked.size() == 0) break;

        counter++;

        for (int i = 0; i < kicked.size(); i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if(j != kicked[i]){
                    tied[j].erase(kicked[i]);
                }
            }
            tied[kicked[i]].clear();
            students.erase(kicked[i]);
            
        }
        
        if(students.size() == 1) break;

        
    }
    
    cout << counter << endl;
    
    
    return 0;
}