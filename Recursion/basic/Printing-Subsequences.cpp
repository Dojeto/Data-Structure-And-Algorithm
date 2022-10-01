#include<bits/stdc++.h>
using namespace std;

void printF(int ind,vector <int> &v,int arr[],int n)
{
    if(ind==n)
    {
        for(auto it: v)
        {
            cout << it << " " ;
        }
        cout << endl;
        return;
    }
    v.push_back(arr[ind]);
    printF(ind+1,v,arr,3);
    v.pop_back();
    printF(ind+1,v,arr,3);
}

int main() {
    int arr[3] = {3,1,2};
    vector<int> v;
    printF(0,v,arr,3);
}
