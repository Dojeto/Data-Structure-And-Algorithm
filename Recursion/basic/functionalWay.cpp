#include<bits/stdc++.h>
using namespace std;

int sum(int n)
{
    if(n<1)
        return 0;
    return n + sum(n-1);
}

int main() {
    int x= 3;
    cout << sum(x);
    return 0;
}