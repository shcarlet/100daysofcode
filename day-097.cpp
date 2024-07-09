class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>>q;
        int fresh=0;
        int time=0;
        int r=grid.size();
        int c=grid[0].size();
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]==1)
                {
                    fresh++;
                }
                if(grid[i][j]==2)
                {
                    q.push({i,j});
                }
            }
        }
        vector<vector<int>>dir={{0,1},{1,0},{0,-1},{-1,0}};
        while(fresh>0 && !q.empty())
        {
            int length=q.size();
            for(int i=0;i<length;i++)
            {
                int x=q.front().first;
                int y=q.front().second;
                q.pop();
                for(int j=0;j<4;j++)
                {
                    int row=x+dir[j][0];
                    int col=y+dir[j][1];
                    if(row>=0 && row<r && col>=0 && col<c && grid[row][col]==1)
                    {
                        grid[row][col]=2;
                        q.push({row,col});
                        fresh--;
                    }
                    
                    
                }
              
            }
            time++;
        }
        if(fresh==0)
        {
            return time;
        }
        else
        {
            return -1;
        }
    }
};
