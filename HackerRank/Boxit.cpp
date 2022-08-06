#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


/* Two Test Case wrong **

class Box
{
    private:
        int l,b,h;
    public:
        Box()
        {
            l=0;
            b=0;
            h=0;
        }
        Box(int x,int y,int z)
        {
            l=x;
            b=y;
            h=z;
        }
        
        int CalculateVolume()
        {
            return l * b * h;
        }
        
        friend ostream& operator << (ostream& s,Box o2)
        {
            s << o2.l << " " << o2.b << " " << o2.h;
            return s;
        }
        
        friend bool operator < (Box x1,Box x2)
        {
            if(x1.CalculateVolume()<x2.CalculateVolume())
            {
                return true;
            }
            else{
                return false;   
            }
        }
};

int main() {   
    int t,q,i;
    Box temp;
    cin >> t;
    for (i=0;i<t;i++)
    {
        cin >> q;
        if(q==1)
        {
            cout << temp << endl;
        }
        else if(q==2)
        {
            int a,b,c;
            cin >> a >> b >> c;
            Box tempBox(a,b,c);
            temp = tempBox;
            cout << temp << endl;
        }
        else if(q==3)
        {
            int a,b,c;
            cin >> a >> b >> c;
            Box tempBox(a,b,c);
            if(tempBox < temp)
            {
                cout << "Lesser\n";
            }
            else
            {
                cout << "Greater\n";
            }
        }
        else if(q==4)
        {
            cout << temp.CalculateVolume() <<endl;
        }
        else if(q==5)
        {
            Box tempBox(temp);
            cout << temp <<endl;
        }
    }
    return 0;
}

*/


// Online Solution

class Box{
    private :
            int l,b,h;
    public:
    Box(){l=b=h=0;}
    Box(int len,int br,int hg){
        l = len;
        b = br;
        h = hg;
    }
    Box(const Box& B){
        l = B.l;
        b = B.b;
        h = B.h;
    }
        int getLenght(){
        return l;
    }
    int getBreadth(){
        return b;
    }
    int getHeight(){
        return h;
    }
    long long CalculateVolume(){
        return (long long)l*b*h;
    }
    friend bool operator < ( Box&A,Box& B){
        if( (A.l < B.l) || ((A.b < B.b) && (A.l == B.l)) || ((A.h < B.h) && (A.l == B.l) && (A.b == B.b)) ){
            return true;
        }else{
            return false;
        }
    };
    
    friend ostream& operator<< (ostream& output, const Box& B){
        output << B.l << " " << B.b << " " << B.h;
        return output;
    }
};
void check2()
{
    int n;
    cin>>n;
    Box temp;
    for(int i=0;i<n;i++)
    {
        int type;
        cin>>type;
        if(type ==1)
        {
            cout<<temp<<endl;
        }
        if(type == 2)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            temp=NewBox;
            cout<<temp<<endl;
        }
        if(type==3)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            if(NewBox<temp)
            {
                cout<<"Lesser\n";
            }
            else
            {
                cout<<"Greater\n";
            }
        }
        if(type==4)
        {
            cout<<temp.CalculateVolume()<<endl;
        }
        if(type==5)
        {
            Box NewBox(temp);
            cout<<NewBox<<endl;
        }
    }
}
int main()
{
    check2();
}