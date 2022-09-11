#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--)
    {
        long long n,i,temp,minx=1e18,maxs=-1e18;
        vector<long long > v;
        cin >> n;
        for(i=0;i<n;i++)
        {
            cin >> temp;
            v.push_back(temp);
        }
        sort(v.begin(),v.end());
        maxs= max(v[0]*v[0],v[n-1]*v[n-1]);
        if(v[0]<0 && v[n-1]>0)
        {
            minx =v[0]*v[n-1]; 
        }
        else
        {
            for(i=0;i<n;i++)
            {
                minx=min(minx,v[i]*v[i]);
            }
        }
        cout <<  minx << " " << maxs << endl;
    }
	return 0;
}
