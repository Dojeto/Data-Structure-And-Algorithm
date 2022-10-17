class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,int> obj;
        int count =0;
        for(int i=0;i<nums.size();i++)
        {
            obj[nums[i]]++;
        }
        for(auto it:obj)
        {
            if(it.second>1)
            {
                count += ((it.second)*((it.second)-1))/2;
            }
        }
        return count;
    }
};
