class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        int area=0;
        unordered_set<string>visit;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]==1 && visit.count(to_string(i)+","+to_string(j))==0)
                {
                    area=max(area,dfs(grid,i,j,r,c,visit));
                }
            }
        }
        return area;
    }
    private:
      int dfs(vector<vector<int>>& grid,int i,int j, int r,int c,unordered_set<string>& visit)
      {
        r=grid.size();
        c=grid[0].size();
        if(i<0 || j<0 || i>=r || j>=c || grid[i][j]==0 || visit.count(to_string(i)+","+to_string(j)))
        {
            return 0;
        }
        visit.insert(to_string(i)+","+to_string(j));
        return 1+dfs(grid,i-1,j,r,c,visit)+
        dfs(grid,i+1,j,r,c,visit)+
        dfs(grid,i,j-1,r,c,visit)+
        dfs(grid,i,j+1,r,c,visit);
      }
};
