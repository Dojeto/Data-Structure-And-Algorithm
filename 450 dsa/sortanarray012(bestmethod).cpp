// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int arr[10] = {1,0,2,2,0,0,1,1,1,2};
    int mid =0,low=0,high=9,i=-1,temp;
    while(mid<=high)
    {
        switch(arr[mid])
        {
        case 0:
            temp = arr[mid];
            arr[mid] = arr[low];
            arr[low] = temp;
            mid ++,low++;
            break;
        case 1:
            mid++;
            break;
        case 2:
            temp = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp;
            high--;
            break;
        }
    }
    
    for(i=0;i<10;i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}