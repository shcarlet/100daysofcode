class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool zeroinfirstrow=false;
        int row=matrix.size();
        int col=matrix[0].size();
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(matrix[i][j]==0)
                {
                    matrix[0][j]=0;
                    if(i>0)
                    {
                        matrix[i][0]=0;
                    }
                    else
                    {
                        zeroinfirstrow=true;
                    }
                }
            }
        }
        for(int i=1;i<row;i++)
        {
            for(int j=1;j<col;j++)
            {
                if(matrix[i][0]==0 || matrix[0][j]==0)
                {
                    matrix[i][j]=0;
                }
            }
        }
        if(matrix[0][0]==0)
        {
            for(int i=0;i<row;i++)
            {
                matrix[i][0]=0;
            }
        }
        if(zeroinfirstrow=true)
        {
            for(int j=0;j<col;j++)
            {
                matrix[0][j]=0;
            }
        }
    }
};
