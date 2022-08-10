//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	vector<int> getMoreAndLess(int arr[], int n, int x) {
	    int a=0,b=0,i;
	    vector <int> arr2;
	    for(i=0;i<n;i++)
	    {
	        if(arr[i]<=x)
	        {
	            a++;
	        }
	        if(arr[i]>=x)
	        {
	            b++;
	        }
	    }
	    arr2.push_back(a);
	    arr2.push_back(b);
	    return arr2;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMoreAndLess(arr, n, x);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}

// } Driver Code Ends