#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[8] = {2,4,6,8,1,5,79,21};
    int i,j;
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            if(j+1 < 8)
            {
                if(arr[j]>arr[j+1])
                {    
                    swap(arr[j],arr[j+1]);
                }
            }
        }
    }

    for(i=0;i<8;i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}