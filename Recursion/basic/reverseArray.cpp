// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

// where 4 = n

void pal(int i ,int arr[])
{
    if(i>=4/2)
    {
        return;
    }
    swap(arr[i],arr[4-1-i]);
    pal(i+1,arr);
}

int main() {
    int arr[4] = {1,2,4,5};
    pal(0,arr);
    for (int i=0;i<4;i++)
    {
        cout << arr[i];
    }
    return 0;
}


/*

// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

bool pal(string &arr,int n,int x , int i=0)
{
    if(i>=x)
    {
        return true;
    }
    else if(arr[i] != arr[x])
    {
        return false;
    }
    pal(arr,n,x-1,i+1);
}

int main() {
    string str = "missim";
    cout << pal(str,6,6-1) << endl;
    // for (int i=0;i<6;i++)
    // {
    //     cout << str[i];
    // }
    return 0;
}

*/
