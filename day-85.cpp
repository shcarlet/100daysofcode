class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>res;
        vector<int>cur;
        recursion(nums,target,0,cur,res);
        return res;
    }
    private:
    void recursion(vector<int>&array,int target,int i,vector<int>& cur, vector<vector<int>>& res)
    {
        if(target<0 || i>=array.size())
        {
            return;
        }
        if(target==0)
        {
            res.push_back(cur);
            return;
        }
        cur.push_back(array[i]);
        recursion(array,target-array[i],i,cur,res);
        cur.pop_back();
        recursion(array,target,i+1,cur,res);
    }

};
