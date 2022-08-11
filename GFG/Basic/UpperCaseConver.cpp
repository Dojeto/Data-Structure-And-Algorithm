//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string transform(string str);
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        cout<<transform(str)<<endl;
    }
    return 0;
}
// } Driver Code Ends



string transform(string s)
{
    int i;
    s[0] = s[0] - 32;
    for(i=0;i<s.length();i++)
    {
        if(s[i]==' ')
        {
            s[i+1]=s[i+1] - 32;
        }
    }
    return s;
}