#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--)
	{
	    int x,y;
	    cin >> x >> y;
	    if(x+y == 2 || x+y == 3 || x+y == 5 || x+y == 7 || x+y == 11)
	    {
	        cout << "Alice" << endl;
	    }
	    else
	    {
	        cout << "Bob" << endl;
	    }
	}
	return 0;
}
