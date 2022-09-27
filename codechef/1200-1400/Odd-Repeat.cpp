#include <iostream>
using namespace std;

int main() {
	long long T,N,K,S;
	cin>>T;
	while(T--){
	    cin>>N>>K>>S;
	    int x=1;
	    while(N--){
	        S-=x;
	        x+=2;
	    }
	    x=1;
	    while(x*(K-1)!=S){
	        x+=2;
	    }
	    cout<<x<<endl;
	}
}
