//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        int pos=0,des=0,jump=0;
        if(n==1)
        {
            return 0;
        }
        else if(arr[0]== 0) 
        {
            return -1;
        }
        else
        {
            for(int i=0;i<n-1;i++)
            {
                des = max(des,i+arr[i]);
                if(pos == i)
                 {
                    if(des == pos)
                    {
                      return -1;
                    }
                pos = des;
                jump ++;
            }
            
        }
        return jump;
        }
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends