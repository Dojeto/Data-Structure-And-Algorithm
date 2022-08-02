#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void increment(int *v,int*y)
{
    int c = *v;
    *v = *v + *y;
    *y = c - *y;
    if(*y < 0)
    {
        *y = -1 * (*y);
    }
}

int main() {
    int a;
    int b;
    cin >> a >> b;
    increment(&a, &b);
    cout << a <<endl;
    cout << b <<endl; 
    return 0;
}
