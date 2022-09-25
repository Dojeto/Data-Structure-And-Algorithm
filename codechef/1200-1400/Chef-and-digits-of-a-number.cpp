#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--)
    {
        string s;
        long long count1=0,count0=0;
        cin >> s;
	    for(int i=0;i<s.length();i++)
	    {
	        if (s[i]=='1')
	        {
	            count1++;
	        }
	        else
	        {
	            count0++;
	        }
	    }
	    
	    if(count1==1 || count0==1)
	    {
	        cout<<"Yes" <<endl;
	    }
	    
	    else
	    {
	        cout<<"No" << endl;
	    }
	}
    
	return 0;
}
