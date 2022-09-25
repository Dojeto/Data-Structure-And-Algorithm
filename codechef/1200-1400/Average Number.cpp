#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--)
	{
	    double x,y,z;
	    long long ans2,sum=0,temp;
	    cin >> x >> y >> z;
	    for(long long i =0;i<x; i++)
	    {
	        cin >> temp;
	        sum = sum + temp; 
	    }
	    auto ans = (z*(x+y)-sum)/y;
	    ans2 = ans;
        if(ans <= 0)
        {
            cout << -1 << endl;
        }
        else if(ans2-ans != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << ans2 << endl;
        }
	}
	return 0;
}
