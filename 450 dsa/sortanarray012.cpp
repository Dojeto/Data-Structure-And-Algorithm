//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int i,counter=0,temp;
        for(i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                temp = a[counter];
                a[counter] = a[i];
                a[i]=temp;
                counter ++;
            }
        }
        for(i=0;i<n;i++)
        {
            if(a[i]==1)
            {
                temp = a[counter];
                a[counter] = a[i];
                a[i]=temp;
                counter ++;
            }
        }
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends