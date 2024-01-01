class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int cookienum=s.size();
        if(cookienum==0)
        {
            return 0;
        }
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int maxnum=0;
        int cookieI=cookienum-1;
        int childI=g.size()-1;
        while(cookieI>=0 && childI>=0)
        {
            if(s[cookieI]>=g[childI])
            {
                maxnum++;
                cookieI--;
                childI--;
            }
            else
            {
                childI--;
            }
        }
        return maxnum;
    }
};
