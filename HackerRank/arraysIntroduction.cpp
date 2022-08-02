#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector <int> arr;
    int n,a,temp;
    cin >> n;
    temp =n;
    while(n--)
    {
        cin >> a;
        arr.push_back(a);
    }
    reverse(arr.begin(),arr.end());
    a=0;
    while(temp--)
    {
        cout <<arr[a] << " ";
        a++;
    }
    return 0;
}
