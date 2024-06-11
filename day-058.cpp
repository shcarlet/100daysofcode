class Solution {
public:
    int findMin(vector<int> &nums) {
      int l=0,r=nums.size()-1;
      int res=nums[0];
      while(l<=r)
      {
        if(nums[l]<nums[r])
        {
            res=min(res,nums[l]);
            break;
        }
        int mid=(l+r)/2;
        res=min(res,nums[mid]);
        if(nums[mid]<nums[r])
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
      }
      return res;
    }
};
