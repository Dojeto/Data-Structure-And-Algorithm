#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--)
	{
	    map <char,int> obj;
	    int n;
	    char x;
	    int counter = 0;
	    cin >> n;
	    for(int i=0;i<n;i++)
	    {
	        cin >> x;
	        obj[x]++;
	    }
	    for(auto it:obj)
	    {
            if(it.second % 2 == 0)
            {
                counter++;
            }
	    }
	    if(obj.size() == counter)
	    {
	        cout << "YES" << endl;
	    }
	    else
	    {
	        cout << "NO" << endl;
	    }
	}
	return 0;
}
