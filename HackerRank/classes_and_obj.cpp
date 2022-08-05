#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Student
{
    public:
        int i;
        static int Score()
        {
            int a1,a2,a3,a4,a5;
            cin >> a1 >>a2 >> a3 >>a4 >>a5;
            return a1+a2+a3+a4+a5;   
        }
        
};

int main() {
    int n,j,temp=0,counter=0;
    cin >> n;
    for(j=0;j<n-1;j++)
    {   // cout << Student::Score() <<endl;
        int x;
        if(j==0)
        {
           temp = Student::Score() ;
        }
        x = Student::Score();
        if(temp<x)
        {
            counter++;
        }
    } 
    cout << counter;
    return 0;
}
