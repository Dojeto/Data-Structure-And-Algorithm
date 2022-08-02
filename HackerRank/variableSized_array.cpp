#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a,b,c,d;
    int i,j;
    vector <vector<int>> arr;
    vector <int> arr2;
    cin >> a >> b;
    for(i=0;i<a;i++)
    {
        int n;
        cin >> n;
        for(j=0;j<n;j++)
        {
            int x;
            cin >> x;
            arr2.push_back(x);
        }
        arr.push_back(arr2);
        arr2.clear();
    }
    
    for(i=0;i<b;i++)
    {
        cin >> c >> d;
        cout << arr[c][d] << endl;
    }
    return 0;
}
