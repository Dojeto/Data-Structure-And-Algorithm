#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--)
	{
	    int x1,x2,x3,x4,x5,x6;
	    cin >> x1 >> x2 >> x3 >> x4 >> x5 >> x6;
	    if(((x2 == x3)&&(x1==x4)) || ((x2 == x4)&&(x1==x3)))
	    {
	        cout << 1 << endl;
	    }
	    else if (((x2 == x5) && (x1 == x6)) || ((x2 == x6) && (x1 == x5)))
	    {
	        cout << 2 << endl;
	    }
	    else
	    {
	        cout << 0 << endl;
	    }
	}
	return 0;
}
