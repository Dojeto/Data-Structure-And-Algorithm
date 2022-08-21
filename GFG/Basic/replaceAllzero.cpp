//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}
// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n) {
    string s;
    stringstream s2;
    int i;
    s=to_string(n);
    for(i=0;i<s.length();i++)
    {
        if(s[i] == '0')
        {
            s[i] = '5';
        }
    }
    s2 << s;
    s2 >> i;
    return i;
}