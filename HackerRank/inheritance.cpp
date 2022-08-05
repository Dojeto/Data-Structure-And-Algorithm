#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Equilateral {
    public:
        void equilateral (){
            cout<<"I am an equilateral triangle\n";
        }
};

class Isosceles : public Equilateral{
    public:
        void isosceles(){
            cout<<"I am an isosceles triangle\n";
        }
};

class Triangle : public Isosceles{
    public:
        void triangle(){
            cout<<"I am a triangle\n";
        }
};



int main() {
    Triangle isc;
    isc.equilateral();
    isc.isosceles();
    isc.triangle();
    return 0;   
}
