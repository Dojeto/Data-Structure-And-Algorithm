#include <bits/stdc++.h>
using namespace std;


int main() {
    int i;
    char ch;
    int a,b;
    stringstream ss;
    string temp;
    cin >> temp;
    ss << temp;
    // ss >> a >> ch >> b >> ch >> c;
    while (ss >> a)
    {
        cout << a <<endl;
        ss >> ch;
    }
    // cout << a <<endl <<b <<endl << c << endl;
    return 0;
}
