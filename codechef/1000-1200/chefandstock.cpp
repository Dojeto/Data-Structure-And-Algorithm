#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--)
	{
	    double n,x,y,z ,ans;
	    cin >> n >> x >> y >> z;
	    ans = n + ((z/100)*n);
	    if(ans >= x && ans <= y)
	    {
	        cout << "Yes"<<endl;
	    }
	    else
	    {
	        cout << "No" <<endl;
	    }
	}
	return 0;
}
