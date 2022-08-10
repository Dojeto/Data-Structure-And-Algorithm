//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define M 101

vector<vector<int>> transpose(int a[][M], int n);

int main()
{
    int t;
    cin>>t;
    int a[M][M];
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
        vector<vector<int>> b;
        b = transpose(a, n);
        for(int i=0;i < n;i++)
        {
            for(int j=0;j<n;j++){
                cout << b[i][j] << " ";
            }
        }
        cout<<endl;
    }
}



// } Driver Code Ends


vector<vector<int>> transpose(int a[][M], int n)
{
    vector<vector<int>> arr;
    vector <int> arr2;
    int i,j;
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            arr2.push_back(a[j][i]);
        }
        arr.push_back(arr2);
        arr2.clear();
    }
    return arr;
}


/*
vector<vector<int>> transpose(int a[][M], int n)
{   
    vector<vector<int>> arr(n, vector<int>(n));
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) arr[i][j] = a[j][i];
    return arr;
}

*/