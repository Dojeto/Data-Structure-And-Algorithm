// C++ program to count words in
// a string using stringstream.
#include <iostream>
#include <sstream>
#include<string>
using namespace std;

//going to do some experiments 

int main()
{

    stringstream st;

	string word;

    char ch;

	int count = 0;

	string s = " 24 , geeks for, geeks geeks "
			"contribution placements";

    st << s;
    st >> s ;

    cout << s;
	return 0;
}
