class Solution {
public:
    bool halvesAreAlike(string s) {
        auto countvowels=[](const string& str)
        {
            unordered_set<char>vowels{'a','e','i','o','u','A','E','I','O','U'};
            int count=0;
            for(char c:str)
            {
                if(vowels.count(c)>0)
                {
                    count++;
                }
            }
            return count;
        };
        int len=s.length();
        int mid = len/ 2;
        string firsth=s.substr(0,mid);
        string sech=s.substr(mid);
        return countvowels(firsth)==countvowels(sech);

    }
};
