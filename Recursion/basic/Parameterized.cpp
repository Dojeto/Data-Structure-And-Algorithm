#include<bits/stdc++.h>
using namespace std;

int mul(int n,int l = 1)
{
    if(n < 1)
    {
        return l;
    }
    else
    {
        sum(n-1,l*n);
    }
}

int sum(int n,int l = 0)
{
    if(n < 0)
    {
        return l;
    }
    else
    {
        sum(n-1,l+n);
    }
}

int main() {
    int x= 4;
    cout << sum(x);
    return 0;
}