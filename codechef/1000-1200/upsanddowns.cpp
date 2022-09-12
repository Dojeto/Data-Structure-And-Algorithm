#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        vector<long long> v;
        long long n, temp, i;
        cin >> n;
        for (i = 0; i < n; i++)
        {
            cin >> temp;
            v.push_back(temp);
        }
        sort(v.begin(), v.end());

        for (i = 0; i < n; i += 2)
        {
            if (i + 2 <= n - 1)
            {
                swap(v[i + 1], v[i + 2]);
            }
        }
        for (auto it : v)
        {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}
