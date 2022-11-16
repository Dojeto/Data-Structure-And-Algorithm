#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--)
	{
	    int n;
	    cin >> n;
	    int arr[2*n];
	    int count =0;
	    map <int,int> obj;
	    for(int i=0;i<(2*n);i++)
	    {
	        cin >> arr[i];
	    }
	    for(int i=0;i<(2*n);i++)
	    {
	        obj[arr[i]]++;
	    }
	    for(auto it:obj)
	    {
	        if(it.second >=3)
	        {
	            count++;
	            break;
	        }
	    }
	    if(count)
	    {
	        cout << "NO" << endl;
	    }
	    else
	    {
	        cout << "YES" << endl;
	    }
	}
	return 0;
}
