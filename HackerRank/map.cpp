#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    map <string,int> obj;
    string s1;
    int i,n,a,temp;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> a >> s1;
        if(a == 1)
        {
            cin >> temp; 
            if(obj[s1])
            {
                obj[s1]= obj[s1] + temp;
            }
            else{
                obj[s1] = temp;
            }
        }
        else if(a==2)
        {
            obj.erase(s1);
        }
        else if(a==3)
        {
            cout << obj[s1] << endl;
        }
    }
    return 0;
}
