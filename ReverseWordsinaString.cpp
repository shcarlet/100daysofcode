class Solution {
public:
    string reverseWords(string s) {
       int r=0;
       int n=s.length();
       string res;
       while(r<n)
       {
        while(r<n && s[r]==' ')
        {
            r++;
        }
        if(r>=n)
        {
            break;
        }
        int l=r+1;
        while(l<n && s[l]!=' ')
        {
            l++;
        }
        string sub=s.substr(r,l-r);
        if(res.length()==0)
        {
            res=sub;
        }
        else
        {
            res=sub+" "+res;
        }
        r=l+1;
       }
       return res;
    }
};
