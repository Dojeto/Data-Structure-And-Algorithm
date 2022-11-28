class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> arr;
        for(int i=n;i<2*n;i++)
        {
            arr.push_back(nums[i-n]);
            arr.push_back(nums[i]);
        }
        return arr;
    }
};
