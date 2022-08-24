#include<bits/stdc++.h>
using namespace std;

void print(int i)
{
    if(i >= 5)
    {
        return;
    }
    else
    {
        cout << "Dojeto" << endl;
        print(i+1);
    }
}

int main() {
    int x= 0;
    print(x);
    return 0;
}