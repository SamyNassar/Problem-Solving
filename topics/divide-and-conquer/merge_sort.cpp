#include <bits/stdc++.h>
using namespace std;


void merge(vector<int> &v, int start, int mid, int end){
    
    int temp[end - start + 1];

    int i = start, j = mid+1, k = 0;

    while (i <= mid && j <= end)
    {
        if(v[i] <= v[j]) temp[k++] = v[i++];
        else temp[k++] = v[j++];
    }

    while (i <= mid)
    {
        temp[k++] = v[i++];
    }

    while (j <= end)
    {
        temp[k++] = v[j++];
    }
    
    for (int x = 0; x < end-start+1; x++)
    {
        v[start+x] = temp[x];
    }
 
}

void merge_sort(vector<int> &v, int start, int end){

    if(start < end){
        int mid = (start + end) / 2;
        merge_sort(v, start, mid);
        merge_sort(v, mid+1, end);
        merge(v, start, mid, end);
    }

    

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vector<int> v = {5,6,9,7,1,2,5,10,99,54};

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << "\n";

    merge_sort(v, 0, v.size()-1);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
        
    return 0;
}