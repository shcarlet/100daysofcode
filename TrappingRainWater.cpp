class Solution {
public:
    int trap(vector<int>& height) {
       if(height.empty())
       {
        return 0;
       } 
       int l=0,r=height.size()-1;
       int leftmax=height[l];
       int rightmax= height[r];
       int res=0;
       while(l<r)
       {
        if(leftmax<rightmax)
        {
            l++;
            leftmax=max(leftmax,height[l]);
            res=res+leftmax-height[l];
        }
        else
        {
            r--;
            rightmax=max(rightmax,height[r]);
            res=res+rightmax-height[r];
        }
       }
       return res;
    }
};
