#include<bits/stdc++.h>
using namespace std;
int main(){
    double t,a,b,c,d,f,e;
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>d;
        f=c/double(a);
        e=d/double (b);
        if(f<e) {cout<<"-1"<<endl;}
        else if(f>e) {cout<<"1"<<endl;}
        else cout<<"0"<<endl;
    }
}