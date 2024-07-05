class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
       vector<vector<int>>res;
       sort(nums.begin(),nums.end());
       recurs({},0,nums,res);
       return res; 
    }
    private:
       void recurs(vector<int>subset, int start,vector<int>& nums,vector<vector<int>>& res)
       {
        res.push_back(subset);
        for(int i=start;i<nums.size();i++)
        {
            if(i>start && nums[i]==nums[i-1])
            {
                continue;
            }
            subset.push_back(nums[i]);
            recurs(subset,i+1,nums,res);
            subset.pop_back();

        }
       }
};
