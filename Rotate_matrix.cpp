class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int edge=matrix.size();
        int top=0,bottom=edge-1;
        while(top<bottom)
        {
            for(int col=0;col<edge;col++)
            {
                int temp=matrix[top][col];
                matrix[top][col]=matrix[bottom][col];
                matrix[bottom][col]=temp;

            }
            top++;
            bottom--;
        }
            for(int row=0;row<edge;row++)
            {
                for(int col=row+1;col<edge;col++)
                {
                    int temp=matrix[row][col];
                    matrix[row][col]=matrix[col][row];
                    matrix[col][row]=temp;
                }
            }
        
    }
};
