#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,a,b,i;
    vector<int> v1;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> a;
        v1.push_back(a);
    }
    cin >> a;
    v1.erase(v1.begin()+(a-1));
    cin >> a >> b;
    v1.erase(v1.begin()+(a-1),v1.begin()+(b-1));
    cout << v1.size() << endl;
    for(auto it : v1)
    {
        cout << it << " ";
    }
    return 0;
}
