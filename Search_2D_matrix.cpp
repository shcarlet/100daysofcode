class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int low=0;
       int high=matrix[0].size()-1;
       while(low<matrix.size() && high>-1)
       {
          if(matrix[low][high]==target)
          {
            return true;

          }
          if(target>matrix[low][high])
          {
            low++;
          }
          else
          {
            high--;
          }
       }
       return false;
    }
};
