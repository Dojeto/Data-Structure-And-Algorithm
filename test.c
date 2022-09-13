// Online C compiler to run C program online
#include <stdio.h>

void display (int arr[],int f , int r )
{
    int i;
    for(i=f;i<r;i++)
    {
        printf("%d \n",arr[i]);
    }
}

void push (int arr[],int *f,int *r,int N,int y)
{
    if(*f == -1)
    {
        *r = 0;
        *f = 0;
    }
    else if(*f==*r)
    {
        printf("OVERFLOW");
        return;
    }
    if(*r == N-1)
    {
        *r = 0;
    }
    else
    {
        arr[*r] = y;
        *r = *r + 1;
    }
    return;
}

int main() {
    int arr[5],front=-1,rare=-1;
    push(arr,&front,&rare,5,10);
    // printf("%d \n",rare);
    push(arr,&front,&rare,5,8);
    push(arr,&front,&rare,5,1);
    push(arr,&front,&rare,5,8);
    // push(arr,&front,&rare,5,12);
    // push(arr,&front,&rare,5,102); 
    display(arr,front,rare);
    return 0;
}