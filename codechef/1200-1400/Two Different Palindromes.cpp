#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--)
	{
	    long long x,y;
	    cin >> x >> y;
	    if(x %2 !=0 && y%2 !=0)
	    {
	        cout << "No" << endl;
	    }
	    else
	    {
	        if(x==1 || y==1)
	        {
	            cout << "No" <<endl;
	        }
	        else
	        {
    	        cout << "Yes" << endl;
	        }
	    }
	}
	return 0;
}
