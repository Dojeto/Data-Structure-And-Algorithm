//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string delAlternate(string S) {
        int i;
        string s2;
        for(i=0;i<S.length();i=i+2)
        {
            s2.push_back(S[i]);
        }
        return s2;
        //  for(i=1;i<S.length();i=i+2)
        //  {
        //     S[i] = '\0';
        //  }
        //  return S;
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
        cout << ob.delAlternate(S) << endl;
    }
    return 0;
}

// } Driver Code Ends