class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0;
        int h=nums.size();
        int m;
        if(target>nums[h-1])
        {
            return h;
        }
        while(l<=h)
        {
            m=(l+h)/2;
            if(nums[m]==target)
            {
                return m;
            }
            if(target<nums[m])
            {
                h=m-1;
            }
            else
            {
                l=m+1;
            }
        }
        return l;
    }
};
