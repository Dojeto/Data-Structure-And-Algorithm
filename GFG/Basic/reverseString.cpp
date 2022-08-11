//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string revStr(string S) {
        int i,temp;
        for(i=0;i<S.length()/2;i++)
        {
           temp = S[i];
           S[i] = S[S.length()-1-i];
           S[S.length()-1-i] = temp;
        }
        return S;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.revStr(S) << endl;
    }
    return 0;
}

// } Driver Code Ends