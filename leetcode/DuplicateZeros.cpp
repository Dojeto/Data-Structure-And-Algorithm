class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int i,j,n=arr.size();
        for(i=0;i<n-1;i++)
        {
            if(arr[i]==0)
            {
                for(j=n-2;j>=i;j--)
                {
                    arr[j+1] = arr[j];
                }
                i++;
            }
        }
    }
};
