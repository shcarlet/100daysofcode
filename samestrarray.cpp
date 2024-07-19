class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
      
        string res1;
        string res2;
        for(const string s: word1)
        {
           res1+= s;
        }
        cout<<res1;
        for(const string t: word2)
        {
            res2+=t;
        }
        cout<<res2;
        if(res1==res2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
