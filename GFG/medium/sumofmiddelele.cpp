// with merge two sorted array 


//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:

    void merge (int ar1[],int ar2[],int ar3[],int n)
    {
        int i=0,j=0,k=0;
        while(i<n && j<n)
        {
            if(ar1[i] < ar2[j])
            {
                ar3[k++] = ar1[i++];
            }
            else
            {
                ar3[k++] = ar2[j++];
            }
        }
        
        while (i<n)
        {
            ar3[k++] = ar1[i++];
        }
        
        while (j<n)
        {
            ar3[k++] = ar2[j++];
        }
    }
    
    int findMidSum(int ar1[], int ar2[], int n) {
            int arr[2*n];
            int i;
            merge(ar1,ar2,arr,n);
            if((2*n)%2 == 0)
            {
                return arr[n-1] + arr[n];
            }
            else
            {
                return arr[n+1];
            }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int ar1[n], ar2[n];
        for (i = 0; i < n; i++) {
            cin >> ar1[i];
        }
        for (i = 0; i < n; i++) {
            cin >> ar2[i];
        }
        Solution ob;
        auto ans = ob.findMidSum(ar1, ar2, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends