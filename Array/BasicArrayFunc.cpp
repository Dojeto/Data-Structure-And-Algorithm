#include<bits/stdc++.h>

using namespace std;

void push (int arr[],int x,int &n)
{
    int i;
    arr[n] = x;
    n++;
}

void specdelete(int arr[],int x,int &n)
{
    int i;
    for(i=x-1;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n]=0;
    n--;
}

void insterAtposition(int arr[],int x ,int num,int &n)
{
    int i;
    for (i=n+1;i>x-1;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[x-1]=num;
    n++;
}

int main()
{
    int arr[100];
    int i,n;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    push(arr,15,n);
    specdelete(arr,1,n);
    insterAtposition(arr,1,13,n);
    for(i=0;i<n;i++)
    {
        cout << arr[i]<<endl;
    }
    return 0;
}