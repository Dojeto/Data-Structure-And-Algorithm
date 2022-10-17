class Solution {
public:
    int xorOperation(int n, int start) {
        int arr[n],ans = 0;
        for(int i=0;i<n;i++)
        {
            arr[i] = start + 2 * i;
        }
        for(int i=0;i<n;i++)
        {
            ans ^= arr[i];
        }
        return ans;
    }
};
