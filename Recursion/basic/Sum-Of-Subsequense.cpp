#include<bits/stdc++.h>
using namespace std;

void printF(int ind,vector <int> &v,int s,int arr[],int n ,int sums=3)
{
    if(ind == n)
    {
        if(s == sums)
        {
            for(auto it : v)
            {
                cout << it << " ";
            }
            cout << endl;
        }
        return;
    }
    v.push_back(arr[ind]);
    s+=arr[ind];
    printF(ind+1,v,s,arr,3);
    s-=arr[ind];
    v.pop_back();
    printF(ind+1,v,s,arr,3);
}

int main() {
    int arr[3] = {3,1,2};
    vector<int> v;
    printF(0,v,0,arr,3);
}
