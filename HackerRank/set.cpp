#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;


int main() {
    set<int> s1;
    int i,n,a,b;
    cin >>n;
    for (i=0;i<n;i++)
    {
        cin >> a >> b;
        switch (a) {
            case 1:
                s1.insert(b);
                break;
            case 2:
                s1.erase(b);
                break;
            case 3:
                auto it = s1.find(b);
                if(it == s1.end())
                {
                    cout << "No" << endl;
                }
                else
                {
                    cout << "Yes" << endl;
                }
                break;
        }
    }
    return 0;
}
