//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// time O(n)
// space o(1)
// } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        int i,count=0,ele;
        sort(a,a+size);
        
        if(size == 1)
        {
            return a[0];
        }
        for(i=0;i<size-1;i++)
        {
            if(count == 0)
            {
                ele = a[i];
            }
            if(a[i+1]==ele)
            {
                count ++;
            }
            else
            {
                count=0;
            }
            if(count+1 > size/2)
            {
                return ele;
            }
        }
    return -1;

    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends