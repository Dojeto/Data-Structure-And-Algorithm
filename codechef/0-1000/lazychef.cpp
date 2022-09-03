#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--)
	{
	    int x,y,z;
	    cin >> x >> y >>z;
	    cout << min(x*y,x+z) << endl;
	}
	return 0;
}
