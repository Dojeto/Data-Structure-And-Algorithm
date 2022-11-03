#include <bits/stdc++.h>
using namespace std;

int main() {
	long long T;
	cin >> T;
	while(T--)
	{
	    long long x,sum=0,temp=3;
	    cin >> x;
	    while(temp--)
	    {
	        sum = (x*(x+1))/2;
	        if(sum%2 == 0)
	        {
	            cout << x << endl;
	            break;
	        }
	        x--;
	    }
	}
	return 0;
}
