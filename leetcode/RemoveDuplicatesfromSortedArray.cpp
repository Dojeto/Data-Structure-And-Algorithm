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

// More Optimal Solution 

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    int k=1;
	for(int i=1; i<nums.size(); i++)
    {
        if(nums[i]!=nums[i-1]) 
            nums[k++] = nums[i];     
    }
	return k;
    }
};
