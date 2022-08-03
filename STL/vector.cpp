#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v;
    
    v.push_back(1);
    v.emplace_back(2);
    
    vector <pair <int,int>> v2;
    v2.push_back({1,2});
    v2.emplace_back(1,2); // this will works but not in if we have pair in a pair
    
    vector <int> v3(5,100);
    //size of the v3 vector is 5 and init it as a 100
    // every element of this vector is 100
    // ["100","100","100","100","100"]
    vector <int> v4(5); // ["0","0","0","0","0"]
    
    //iterator
    vector <int> ::iterator it = v.begin(); //points to first location
    
    it++; //it will increase pointing location 
    
    cout << *(it) << " ";
    
    //it = it +2 ; // move 2 index ponting
    
    // vector <int> ::iterator it = v.end(); // point to after last index (null memory)
    // vector <int> ::iterator it = v.rend();// (reverse end) ponit befor first index (null)
    // vector <int> ::iterator it = v.rbegin();//points last index 
    
    // if we use cbegin() (constant begin) then we can't change it 
    
    
    // v[0]
    //v.at(0)
    
    // ** v.back () to get last element 
    
    //pritn all elemnet
    for(vector<int> :: iterator it = v3.begin(); it!= v3.end() ;it++)
    {
        cout << *(it) << " " << endl;
    }
    //auto will take it automatically as a iterator
    for(auto it = v3.begin();it!=v3.end();it++)
    {
        cout << *(it) << " ";
    }
    //now we are not taking any pointer or iterator
    for(auto it:v)
    {
          cout << it << " ";
    }
    
    	// {10, 20, 12, 23}
	v.erase(v.begin()+1);

	// {10, 20, 12, 23, 35}
	v.erase(v.begin() + 2, v.begin() + 4); // // {10, 20, 35} [start, end)


	// Insert function

	vector<int>v(2, 100); // {100, 100}
	v.insert(v.begin(), 300); // {300, 100, 100};
	v.insert(v.begin() + 1, 2, 10); // {300, 10, 10, 100, 100}

	vector<int> copy(2, 50); // {50, 50}
	v.insert(v.begin(), copy.begin(), copy.end()); // {50, 50, 300, 10, 10, 100, 100}

	// {10, 20}
	cout << v.size(); // 2

	//{10, 20}
	v.pop_back(); // {10}

	// v1 -> {10, 20}
	// v2 -> {30, 40}
    //as a example	v.swap(v3); // v1 -> {30, 40} , v2 -> {10, 20}

	v.clear(); // erases the entire vector

	cout << v.empty();

    // List

    list<int> ls;

	ls.push_back(2); // {2}
	ls.emplace_back(4); // {2, 4}

    // *** only uses of list  ***
	ls.push_front(5); // {5, 2, 4};

	ls.emplace_front(); //{2, 4};

    // Deque

    deque<int>dq;
	dq.push_back(1); // {1}
	dq.emplace_back(2); // {1, 2}
	dq.push_front(4); // {4, 1, 2}
	dq.emplace_front(3); // {3, 4, 1, 2}

	dq.pop_back(); // {3, 4, 1}
	dq.pop_front(); // {4, 1}

	dq.back(); 

    // ****only use of deque ****
	dq.front();
    return 0;
}
