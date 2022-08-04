//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;

//Using Stl

// } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
    int PalinArray(int a[], int n)
    {
    	int i,j;
    	string s1;
    	for (i=0;i<n;i++)
    	{
    	    s1 = to_string(a[i]);
    	    for(j=0;j<s1.length();j++)
    	    {
    	        if(s1[j]!=s1[s1.length()-1-j])
    	        {
    	            return false;
    	        }
    	    }
    	}
    	return true;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends