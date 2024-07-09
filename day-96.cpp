class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        queue<pair<int,int>>q;
        int r=grid.size();
        int c=grid[0].size();
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]==0)
                {
                    q.push({i,j});
                }
            }
        }
        vector<vector<int>>direction={{0,1},{0,-1},{1,0},{-1,0}};
        while(!q.empty())
        {
            int x=q.front().first;
            int y=q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                int rdis=x+direction[i][0];
                int cdis=y+direction[i][1];   
                if(rdis>=r || cdis>=c || rdis<0 || cdis<0 || grid[rdis][cdis]!=INT_MAX)
                {
                    continue;
                }
                grid[rdis][cdis]=grid[x][y]+1;
                q.push({rdis,cdis});


            }

        }
    }
};
