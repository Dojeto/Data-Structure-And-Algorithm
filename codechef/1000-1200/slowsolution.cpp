#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int maxT, maxN, sumN;
    cin >> maxT >> maxN >> sumN;
    long long ans = 0;
    while (maxT && sumN)
    {
        int N = min(maxN, sumN);
        ans += N * N;
        sumN -= N;
        maxT--;
    }
    cout << ans << "\n";
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        solution();
    return 0;
}