class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
       vector<int>temp(nums.size());
       split(nums,temp,0,nums.size());
       return nums;
    }
    private:
     void split(vector<int>&nums,vector<int>& temp, int l,int h)
     {
        if(h-l<2)
        {
            return;
        }
        int m=(l+h)/2;
        split(nums,temp,l,m), split(nums,temp,m,h);
        
        if(nums[m]>nums[m-1])
        {
            return;
        }
        int leftptr=l;
        int rightptr=m;
        for(int i=l;i<h;i++)
        {
            if(rightptr==h || (leftptr<m && nums[leftptr]<=nums[rightptr]))
            {
                temp[i]=nums[leftptr++];
            } 
            else
            {
                temp[i]=nums[rightptr++];
            }
        }
        copy(begin(temp)+l,begin(temp)+h,begin(nums)+l);
     }
};
