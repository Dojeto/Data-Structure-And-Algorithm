    vector<int> majorityElement(vector<int>& nums) {
        vector<int> arr;
        map<int,int> obj;
        for(int i=0;i<nums.size();i++)
        {
            obj[nums[i]]++;
        }
        for(auto it:obj)
        {
            if(it.second >= nums.size()-1 || it.second > nums.size()/3)
            {
                arr.push_back(it.first);
            }
        }
        return arr;
    }
