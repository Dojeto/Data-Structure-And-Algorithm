#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--)
	{
	    int a,b,c;
	    cin >> a >> b >> c;
	    if(a > b+c)
	    {
	        cout << "Yes" << endl;
	    }
	    else if(b > a+c)
	    {
	        cout << "Yes" << endl;
	    }
	    else if(c > a+b)
	    {
	        cout << "Yes" << endl;
	    }
	    else
	    {
	        cout << "No" << endl;
	    }
	}
	return 0;
}
