class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=firstindex(nums,target);
        if(first==-1)
        {
            return {-1,-1};
        }
        int last=lastindex(nums,target,first);
        return {first,last};
      
    }
    private:
      int firstindex(vector<int>&nums,int target)
      {
        int l=0,h=nums.size()-1;
        int f=-1;
        while(l<=h)
        {
            int m=l+(h-l)/2;
            if(nums[m]>=target)
            {
                if(nums[m]==target) f=m;
        
                h=m-1;
            }
            else
            {
                l=m+1;
            }
        }
        return f;
      }
    private: 
        int lastindex(vector<int>&nums,int target,int first)
        {
            int l=first,h=nums.size()-1;
            int last=first;
            while(l<=h)
            {
                int m=l+(h-l)/2;
                if(nums[m]<=target)
                {
                    if(nums[m]==target)
                    
                        last=m;
                    
                    l=m+1;
                
                }
                else
                {
                    h=m-1;
                }
            }
            return last;
        }
};
