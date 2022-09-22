#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--)
	{
	    map<long long ,long long> obj;
	    long long n,temp;
	    cin >> n;
	    for(int i=0;i<n;i++)
	    {
	        cin >> temp;
	        if(temp < 0)
	        {
	            obj[1]++;
	        }
	        else if(temp == 0)
	        {
	            obj[0]++;
	        }
	    }
	    
	    if(obj[0] > 0)
	    {
	        cout << 0 << endl;
	    }
	    else if(obj[1] != 0 && obj[1] % 2 != 0)
	    {
	       cout << 1 << endl;
	    }
	    else
	    {
	        cout << 0 << endl;
	    }
	    
	}
	return 0;
}
