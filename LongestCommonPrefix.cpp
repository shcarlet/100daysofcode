class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        sort(strs.begin(),strs.end());
        int n=strs.size();
        //first and last element 
        string first=strs[0],last=strs[n-1];
        int m=min(first.size(),last.size());
        for(int i=0;i<m;i++)
        {
            if(first[i]!=last[i])
            {
                return ans;
            }
            ans=ans+first[i];
        }
        return ans;
        
    }
};
