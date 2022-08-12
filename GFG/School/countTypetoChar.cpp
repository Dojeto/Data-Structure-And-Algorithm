//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> count (string s)
        {
            vector <int> v;
            int i,upper=0,lower =0,num = 0,special =0;
            for(i=0;i<s.length();i++)
            {
                if(s[i]>='A' && s[i]<='Z')
                {
                    upper ++;
                }
                else if(s[i]>='a' && s[i]<='z')
                {
                    lower++;
                }
                else if(s[i]>='0' && s[i] <='9')
                {
                    num++;
                }
                else{
                    special++;
                }
            }
            v.push_back(upper);
            v.push_back(lower);
            v.push_back(num);
            v.push_back(special);
            return v;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        vector <int> res = ob.count (s);
        for (int i : res)
            cout << i << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends