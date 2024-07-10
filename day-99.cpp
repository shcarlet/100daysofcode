class Solution {
public:
    bool canFinish(int course, vector<vector<int>>& prerequisites) {
        vector<vector<int>> premap(course);
        for(auto& pair : prerequisites)
        {
            premap[pair[0]].push_back(pair[1]);
        }
        vector<bool>visiting(course,false);
        for(int i=0;i<course;i++)
        {
            if(!(dfs(i,premap,visiting)))
            {
                return false;
            }
        }
        return true;
    }
    private:
      bool dfs(int courses,vector<vector<int>>& premap, vector<bool>& visiting)
      {
        if(visiting[courses])
        {
            return false;
        }
        if(premap[courses].empty())
        {
            return true;
        }
        visiting[courses]=true;
        for(int i:premap[courses])
        {
            if(!dfs(i,premap,visiting))
            {
                return false;
            }
        }
        visiting[courses]=false;
        premap[courses].clear();
        return true;
      }
};
