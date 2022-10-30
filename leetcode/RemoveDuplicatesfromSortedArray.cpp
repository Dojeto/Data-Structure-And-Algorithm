class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set <int> arr;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            arr.insert(nums[i]);
        }
        for(auto it : arr)
        {
            nums[count++] = it;
        }
        return arr.size();
    }
};
