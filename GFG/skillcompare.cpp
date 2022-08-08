//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void scores(long long a[], long long b[], int &ca, int &cb)
    {
        if(a[0]>b[0])
        {
            ca++;
        }
        else
        {
            if(a[0]!=b[0])
            {
                cb++;
            }
        }
        if(a[1]>b[1])
        {
            ca++;
        }
        else{
            if(a[1]!=b[1])
            {
                cb++;
            }

        }
        if(a[2]>b[2])
        {
            ca++;
        }
        else
        {
            if(a[2]!=b[2])
            {
                cb++;
            }
        }
    }
};

//{ Driver Code Starts.
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        long long int a[5], b[5], i=0;
        int ca=0, cb=0;
        for(i=0; i<3; i++)
            cin>>a[i];
    
        for(i=0; i<3; i++)
            cin>>b[i];
        Solution ob;
        ob.scores(a, b, ca, cb);
        
        cout<<ca<<" "<<cb<<endl;
    }
    return 0 ;
}
// } Driver Code Ends