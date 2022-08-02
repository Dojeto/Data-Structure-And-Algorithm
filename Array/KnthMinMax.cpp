#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,temp,n;
    cout << "enter your number : " ;
    cin >> n;
    int arr[6] = {7,10,4,3,20,15};
    for(i=0;i<6;i++)
    {
        for(j=i+1;j<6;j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    cout << arr[n-1];
    return 0;
}