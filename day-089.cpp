class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>>res;
        vector<string>subset;
        dfs(s,subset,0,res);
        return res;
    }
private:
    void dfs(const string & s, vector<string>& subset, int i, vector<vector<string>>& res)
    {
        if(i>=s.length())
        {
            res.push_back(subset);
            return;
        }

        for(int j=i;j<s.length();j++)
        {
            if(ispal(s,i,j))
            {
                subset.push_back(s.substr(i,j-i+1));
                dfs(s,subset,j+1,res);
                subset.pop_back();
            }
             
            
        }
    }

    bool ispal(const string& s,int l,int r)
    {
        while(l<=r)
        {
            if(s[l]!=s[r])
            {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
    
};
