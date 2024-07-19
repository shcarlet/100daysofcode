class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size())
        {
            return false;
        }
        vector<int>s1count(26,0);
        vector<int>s2count(26,0);
        for(int i=0;i<s1.size();i++)
        {
            s1count[s1[i]-'a']++;
            s2count[s2[i]-'a']++;
        }
        int match=0;
        for(int i=0;i<26;i++)
        {
            if(s1count[i]==s2count[i])
            {
                match++;
            }
        }
        int l=0; //leftptr
        for(int r=s1.size();r<s2.size();r++)
        {
            if(match==26)
            {
                return true;
            }
            int index= s2[r]-'a';
            s2count[index]+=1;
            if(s1count[index]==s2count[index])
            {
                match+=1;
            }
            else if(s1count[index]+1==s2count[index])
            {
                match--;
            }
            index= s2[l]-'a';
            s2count[index]-=1;
            if(s1count[index]==s2count[index])
            {
                match+=1;
            }
            else if(s1count[index]-1==s2count[index])
            {
                match--;
            }
            l++;

        }
        return match ==26;
        
    }
};
