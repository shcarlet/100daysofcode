class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>stri;
        int res=0;
        int l=0;
        for(int r=0;r<s.size();r++)
        {
            while(stri.find(s[r])!=stri.end())
            {
                stri.erase(s[l]);
                l++;
            }
            stri.insert(s[r]);
            res=max(res,r-l+1);
        }
        return res;
        
    }
};
