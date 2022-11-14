class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> arr;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1] == nums[i])
            {
                arr.push_back(nums[i]);
            }
        }
        return arr;
    }
};
