#include <iostream>
using namespace std;

int main() {
    long long T;
    cin >> T;
    while(T--)
    {
        long long n , k;
        cin >> n >> k;
        int count =0;
        long long arr[n];
        for(long long i=0;i<n;i++)
        {
            cin >> arr[i];
            if(arr[i] == k && i!=n-1)
            {
                count = 1 ;
            }
        }
        if(n ==1 && k==arr[0])
        {
            cout << "Yes" << endl;
            continue;
        }
        if(count != 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
	return 0;
}
