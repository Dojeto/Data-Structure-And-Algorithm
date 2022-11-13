#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--)
	{
	    long long a,b,x,y;
	    cin >> a >> b >> x >> y;
	    if(a < b)
	    {
	        if(b-a<=x)
	        {
	            cout << "YES" << endl;
	        }
	        else
	        {
	            cout << "NO" << endl;
	        }
	    }
	    else if(a == b)
	    {
	        cout << "YES" << endl;
	    }
	    else
	    {
	        if(a-b <= y)
	        {
	            cout << "YES" << endl;
	        }
	        else
	        {
	            cout << "NO" << endl;
	        }
	    }
	}
	return 0;
}
