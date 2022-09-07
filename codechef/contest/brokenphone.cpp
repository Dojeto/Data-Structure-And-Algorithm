#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--)
	{
	    long long x,y;
	    cin >> x >> y;
	    if(x==y)
	    {
	        cout << "ANY" << endl;
	    }
	    else if(x>y)
	    {
	        cout << "NEW PHONE" << endl;
	    }
	    else
	    {
	        cout << "REPAIR" << endl;
	    }
	}
	return 0;
}