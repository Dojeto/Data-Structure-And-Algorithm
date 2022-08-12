//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        int arr2[n];
        int temp,i,counter=0;
        for(i=0;i<n;i++)
        {   
            if(arr[i] >= 0)
            {
                arr2[counter] = arr[i];
                counter ++;
            }
        }
        for(i=0;i<n;i++)
        {
            if(arr[i]<0)
            {
                arr2[counter] = arr[i];
                counter ++;
            }
        }
        i=0;
        for(auto it : arr2)
        {
            arr[i++] = it;
        }
    }
};

//{ Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}

// } Driver Code Ends