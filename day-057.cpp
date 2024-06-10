class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=matrix.size(),c=matrix[0].size();
        int top=0,bot=r-1;
        while(top<=bot)
        {
            int row=(top+bot)/2;
            if(target>matrix[row][c-1])
            {
                top=row+1;
            }
            else if(target<matrix[row][0])
            {
                bot=row-1;
            }
            else
            {
                break;
            }
        }
        if(!(top<=bot))
        {
            return false;
        }
        int l=0,h=c-1;
        int row=(top+bot)/2;
        while(l<=h)
        {
            int m=(l+h)/2;
            if(target>matrix[row][m])
            {
                l=m+1;
            }
            else if(target<matrix[row][m])
            {
                h=m-1;
            }
            else
            {
                return true;
            }
        }
        return false;

    }
};
