#include<bits/stdc++.h>
using namespace std;

void print(int i)
{
    if(i <= 0 )
    {
        return;
    }
    else
    {
        print(i-1);
        cout << i;
    }
}

int main() {
    int x= 5;
    print(x);
    return 0;
}