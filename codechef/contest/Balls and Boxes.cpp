#include <iostream>
using namespace std;

int main() {
	long long T;
	cin >> T;
	while(T--)
	{
	    long long x,y;
	    cin >> x >> y;
	    long long s = (y*(y+1))/2;
        if(x>=s)
        {
            cout << "YES"<<endl;
        }
        else
        {
            cout << "NO"<<endl;
        }
	}
	return 0;
}
