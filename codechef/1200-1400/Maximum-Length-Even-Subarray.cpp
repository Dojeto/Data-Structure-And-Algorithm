#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--)
	{
	    long long x,sum=0;
	    cin >> x;
	    long long arr[x];
	    map<long long ,long long> obj;
	    
	    for(long long i=0;i<x;i++)
	    {
	        sum += i+1;
	        obj[i+1] = sum;
	    }
	    for(auto it = obj.rbegin(); it != obj.rend(); it++)
	    {
	        if((it->second)%2 == 0)
	        {
	            cout << it->first;
	            break;
	        }
	    }
	    cout << endl;
	}
	return 0;
}
