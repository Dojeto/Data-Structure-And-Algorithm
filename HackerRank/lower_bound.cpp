#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> v1;
    int a,n,i;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        v1.push_back(a);
    }
    
    cin >> n;
    
    for(i=0;i<n;i++)
    {
        cin >> a;
        auto it = lower_bound(v1.begin(),v1.end(),a);
        if(v1[it-v1.begin()] == a)
        {
            cout << "Yes" << " " << (it-v1.begin())+1 << endl;
        }
        else
        {
            cout << "No" << " " << (it-v1.begin())+1 << endl;
        }
    }
    return 0;
}
