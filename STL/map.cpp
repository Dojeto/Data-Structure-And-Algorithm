#include<bits/stdc++.h>
using namespace std;

int main()
{
	// {key, value}
	map<int, int> mpp;

	map<int, pair<int, int>> mpp;

	map< pair<int, int>, int> mpp;

	// key values can be anything

	mpp[1] = 2;
	// mpp.emplace({3, 1});

	// mpp.insert({2, 4});

	// mpp[{2,3}] = 10; 

	// {
	// 	{1, 2}
	// 	{2, 4}
	// 	{3, 1}
	// }

	for(auto it : mpp) {
		cout << it.first << " " << it.second << endl; 
	}

	// same options for using iterators
	// as we did in vector for the insert function


	cout << mpp[1]; // prints 2
	cout << mpp[5]; // prints 0, since it does not exists


	// auto it = mpp.find(3); // points to the position where 3 is found
	// cout << *(it).second; 

	auto it = mpp.find(5); // points to the end of the map since 5 not there

	// lower_bound and upper_bound works exactly in the 
	// same way as explained in the other video 
    
    // This is the syntax
	auto it = mpp.lower_bound(2); 

	auto it = mpp.upper_bound(3); 

	// erase, swap, size, empty, are same as above 





	// sort(a+2, a+4); // [first, last)

	// sort(a, a+n, greater<int>); 
    
    pair<int,int> a[] = {{1,2}, {2, 1}, {4, 1}}; 

    // sort it according to second element 
    // if second element is same, then sort 
    // it according to first element but in descending 

	// sort(a, a+n ,comp); 

	// {4,1}, {2, 1}, {1, 2}}; 


	// int num = 7; // 111 
	// int cnt = __builtin_popcount(); 

	// long long num = 165786578687;
	// int cnt = __builtin_popcountll();


	string s = "123"; 

	// 123
	// 132
	// 213
	// 231
	// 312
	// 321

	// int maxi = *max_element(a,a+n); 

}