class Solution {
public:
    
    vector<int> getBinary(int n)
    {
        vector<int> arr;
        while(n>0)
        {
            arr.push_back(n % 2);
            n = n/2;
        }
        return arr;
    }

    int hammingDistance(int x, int y) {
        int counter = 0;
        vector<int> arr;
        vector<int> arr2;
        if(getBinary(x).size() >= getBinary(y).size())
        {
            arr = getBinary(x);
            arr2 = getBinary(y);
        }
        else{
            arr2 = getBinary(x);
            arr = getBinary(y);
        }
        for(int i=0;i<arr.size();i++)
        {
            if(i <= arr2.size())
            {
                if(arr[i] != arr2[i])
                {
                counter++;
                }
            }
            else{
                if(arr[i]==1)
                {
                    counter++;
                }
            }
        }
        return counter;
    }
};

//still have some issue
