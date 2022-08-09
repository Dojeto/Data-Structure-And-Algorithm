//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool IsPerfect(int a[],int n)
    {
        int i,counter=0;
        for(i=0;i<n/2;i++)
        {
            if(a[i]==a[n-1-i])
            {
                counter ++;
            }
        }
        if(counter == n/2)
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
};




//{ Driver Code Starts.
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        if(ob.IsPerfect(a,n))
            cout<<"PERFECT\n";
        else
            cout<<"NOT PERFECT\n";
        
    }
    
}
// } Driver Code Ends



/*

another aprproch

class Solution{
    public:
    bool IsPerfect(int a[],int n)
    {
        int i;
        for(i=0;i<n/2;i++)
        {
            if(a[i]!=a[n-1-i])
            {
                return false;
            }
        }
    return true;
    }
};

*/