#include<bits/stdc++.h>
using namespace std;

// I Wrote This Code Using STL :)

// methods for convert int into string

//Method 1
    // stringstream stream;

    // stream << num;
    // string str;
    // s1 = "hii";
    // stream >> str;
    // cout << str.length();

// Method 2
    // string s2 = to_string(num);
    
    // cout << s2.length();

int main()
{
    int arr[100];
    int n,i,j,temp;
    cout << "Enter Your Array Size : ";
    cin >> n;
    string s1,s2;
    
    
    for (i=0;i<n;i++)
    {
        cout << "Enter Your Elements : ";
        cin >> arr[i];
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            s1 = to_string(arr[j]);
            s2 = to_string(arr[j+1]);

            if(j+1 < n)
            {
                if(s1.length()>s2.length())
                {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
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