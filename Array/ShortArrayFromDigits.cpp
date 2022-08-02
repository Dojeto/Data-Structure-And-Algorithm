// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[100];
    int i,j,n,temp,extra,temp2,counter=0,counter2=-0;
    cout << "Enter Your Array Size : ";
    cin >> n;
    
    for (i=0;i<n;i++)
    {
        cout << "Enter Your Elements : ";
        cin >> arr[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            counter =0;
            counter2=0;
            temp = arr[j];
            temp2=arr[j+1];
            while(temp!=0)
            {
                temp = temp/10;
                counter++;
            }
            // cout << counter <<endl;
            while(temp2!=0)
            {
                temp2=temp2/10;
                counter2++;
            }
            // cout << counter2 <<endl;
            if(j+1<n)
            {
                if(counter > counter2)
                {
                extra = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=extra;
                }
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout << arr[i]<<endl;
    }
    return 0;
}