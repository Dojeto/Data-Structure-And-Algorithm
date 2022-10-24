class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> arr2;
        for(int i=0;i<nums.size()*2;i++)
        {
            arr2.push_back(nums[i % nums.size()]);
        }
        return arr2;
    }
};
