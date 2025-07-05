class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>mpai;
        vector<int>res;
        for(int i=0;i<nums.size();i++)
        {
            mpai[nums[i]]++;
        }
        for(auto x :mpai)
        {
            if(x.second>nums.size()/3)
            {
               res.push_back(x.first);
            }
        }
        return res;

    }
};
