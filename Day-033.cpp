class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       unordered_set<int>s;
        for(int i=0;i<nums.size();i++)
            {
                if(s.find(nums[i])!=nums[i])   //S.find(val) iterates through s till it matches Val. if it doesn't it points at s.end
                                               //S.find(val) != S.end() is true when val is present in s else it's false
                {
                    return true;
                }
                s.insert(nums[i]);
            }
        return false;
    }
};

