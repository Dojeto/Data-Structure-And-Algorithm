#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--)
	{
	    int x,i,count=0;
	    cin >> x;
	    string s = to_string(x);
	    for(i=0;i<s.length();i++)
	    {
	        if(s[i]=='4')
	        {
	            count++;
	        }
	    }
	    cout << count << endl;
	}
	return 0;
}
