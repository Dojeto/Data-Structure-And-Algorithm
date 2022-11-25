class Solution {
public:
    int maxProfit(vector<int>& prices) {
    
    int minn=INT_MAX,profit=0,flag;
    for(int i=0;i<prices.size();i++)
    {
        for(int j=i+1;j<prices.size();j++)
        {
            if(prices[j]-prices[i] > profit)
            {
                profit = prices[j]-prices[i];
            }
        }
    }
    return profit;
    }
};

// TLE
