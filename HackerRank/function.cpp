#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int findMax(int a,int b,int c,int d)
{
    int i;
    vector <int> arr;
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);
    arr.push_back(d);
    sort(arr.begin(),arr.end());
    return arr[3];
}

int main() {
    int a , b , c ,d;
    cin >> a >> b >> c >> d ;
    cout << findMax(a,b,c,d);
}
