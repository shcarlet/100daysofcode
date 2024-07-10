class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int row=board.size();
    
        int col=board[0].size();
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(board[i][j]=='O' &&(i==0 ||j==0 || i==row-1 || j==col-1 ))
                {
                    capture(board,i,j);
                }
            }
        }
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(board[i][j]=='O')
                {
                    board[i][j]='X';
                }
            }
        }
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(board[i][j]=='t')
                {
                    board[i][j]='O';
                }
            }
        }
    }
    private: 
       void capture(vector<vector<char>>& board,int r,int c)
       {
        int row=board.size();
        int col=board[0].size();
        if(r<0 || c<0 || r==row || c==col || board[r][c]!='O')
        {
            return;
        }
        board[r][c]='t';
        capture(board,r+1,c);
        capture(board,r-1,c);
        capture(board,r,c+1);
        capture(board,r,c-1);
       }
};
