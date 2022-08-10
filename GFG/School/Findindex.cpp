//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h> 
#include <vector> 
using namespace std; 

// } Driver Code Ends
class Solution
{
  public:
    vector<int> findIndex(int a[], int n, int key)
    {
        vector<int> arr;
        int i;
        for(i=0;i<n;i++)
        {
            if(a[i]==key)
            {
                if(arr.size()== 2)
                {
                    arr.pop_back();
                }
                arr.push_back(i);
            }
        }
        if(arr.size()==0)
        {
            arr.push_back(-1);
            arr.push_back(-1);
        }
        if(arr.size()==1)
        {
            arr.push_back(arr[0]);
        }
        return arr;
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
        vector<int> res;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int key;
        cin>>key;
        Solution ob;
        res=ob.findIndex(arr, n, key);
        for (int i = 0; i < res.size(); i++) 
        cout << res[i] << " ";
        cout << "\n";
    }
    
    return 0;
}

// } Driver Code Ends