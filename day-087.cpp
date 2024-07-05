class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>res;
        vector<int>subset;
        sort(candidates.begin(),candidates.end());
        recurse(candidates,target,0,subset,res);
        return res;
        
    }
    private:
        void recurse(vector<int>& candidates, int target,int i, vector<int>subset, vector<vector<int>>& res)
        {
            if(target==0)
            {
                res.push_back(subset);
                return;
            }
            if(target<0)
            {
                return;
            }

            int prev=-1;
            for(int j=i;j<candidates.size();j++)
            {
                if(candidates[j]==prev)
                {
                    continue;
                }
                subset.push_back(candidates[j]);
                recurse(candidates,target-candidates[j],j+1,subset,res);
                subset.pop_back();
                prev=candidates[j];
               
            }
        }
};
