#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--)
	{
	    int N,M,K,X,ans=0,temp=1,flag=0;
	    cin >> N >> M >> K >> X;
	    while(ans < X )
	    {
	        if(temp % K == 0)
	        {
	            ans += N+M;
	            if(ans >= X)
	            {
	                flag++;
	            }
	        }
	        else{
	            ans += N;
	        }
	        temp++;
	    }
	    if(flag)
	    {
	        cout << "YES" << endl;
	    }
	    else
	    {
	        cout << "NO" << endl;
	    }
	}
	return 0;
}

// New method

#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--)
	{   
	    int n,m,k,x,temp;
	    cin >> n >> m >> k >> x;
	    
	    k--;
	    if(k==0)
	    {
	        cout << "yes" << endl;
	        continue;
	    }
	    
	    temp = x / ((n*k) + (n+m));
	    
	    x-= temp * ((n*k) + (n+m));
	    
	    if(x==0)
	    {
	        cout << "yes" << endl;
	    }
	    else if(x-n*k <=0)
	    {
	        cout << "no" << endl;
	    }
	    else{
	        cout << "yes" <<endl;
	    }
	}
	return 0;
}

