class Solution {
public:
    string decodeString(string s) {
        stack<int>numcount;
        stack<string>wordcount;
        int count=0;
        string word="";
        for(int i=0;i<s.length();i++)
        {
            char c=s[i];
            if(isdigit(c))
            {
                count=count*10+(c-'0');
                
            }
            else if(isalpha(c))
            {
                word=word+c;
            }
            else if(c=='[')
            {
                numcount.push(count);
                wordcount.push(word);
                count=0;
                word="";
            }
            else
            {
                int j=numcount.top();
                numcount.pop();
                string prevword=wordcount.top();
                wordcount.pop();
                string duplicate="";
                for(int i=0;i<j;i++)
                {
                    duplicate=duplicate+word;
                }
                word=prevword+duplicate;
            }
        }
        return word;
    }
};
