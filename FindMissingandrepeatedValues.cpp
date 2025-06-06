class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        int size=n*n;
        vector<int>count(size+1,0);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                count[grid[i][j]]++;
            }
        }   
        int a=-1,b=-1;
        for(int n=1;n<=size;n++)
        {
            if(count[n]==2)
            {
                a=n;
            }
            else if(count[n]==0)
            {
                b=n;
            }
        }
        return {a,b};


    }
};
