#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
	    string s;
	    cin >> s;
	    bool flag = false;
	    for (int i = 1; i < s.size() - 1; i++) {
	        if (s[i] != s[i-1] && s[i] != s[i+1]) {
	            flag = true;
	            break;
	        }
	    }
	    if (flag)
	        cout << "Good\n";
	    else
	        cout << "Bad\n";
	}
	return 0;
}
