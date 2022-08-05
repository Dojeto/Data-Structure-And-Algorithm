#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Rectangle
{
  public:
        int w,h;
        void display(int x ,int y)
        {
            w = x;
            h = y;
            cout << w << " " << h << endl;
        }
};

class RectangleArea : public Rectangle
{
  public:
        void display()
        {
            cout << w * h << endl;
        }  
};

int main() {
    int w,h;
    cin >> w >> h;
    RectangleArea r2;
    r2.Rectangle::display(w, h);
    r2.display();
    return 0;
}
