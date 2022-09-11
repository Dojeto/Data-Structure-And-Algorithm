#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--)
	{
	    long i,n,temp,count=0;
	    map <long,long> obj;
	    vector <long> v;
	    cin >> n;
	    for(i=0;i<n;i++)
	    {
	        cin >> temp;
	        obj[temp]++;
	    }
	    for(auto it : obj)
	    {
	        count+= (it.second * (it.second-1))/2;
	    }
	    cout << count << endl;
	}
	return 0;
}
