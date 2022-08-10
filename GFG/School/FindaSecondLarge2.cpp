#include<bits/stdc++.h>
using namespace std;

int main()
{	
	vector <int> v1;
    int i,n,a;
    cin >> n;
    for(i=0;i<n;i++)
    {
    	cin >> a;
		v1.push_back(a);
	}
    
    sort(v1.begin(),v1.end());
    
    cout << v1[v1.size()-2];
    
    return 0;
}
