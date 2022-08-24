#include<bits/stdc++.h>
using namespace std;

void print(int i)
{
    if(i > 5 )
    {
        return;
    }
    else
    {
        cout << i;
        print(i+1);
    }
}

int main() {
    int x= 1;
    print(x);
    return 0;
}