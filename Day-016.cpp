class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int prevrowcount=0;
        int total=0;
        for(const string&row:bank)
        {
            int currowcount=calc(row);
            if(currowcount==0)
            {
                continue;
            }
            total += currowcount*prevrowcount;
            prevrowcount=currowcount;
        }
        return total;
    }
    private:
    int calc(const string& s)
    {
        int count=0;
        for(char c:s)
        {
            count += c-'0';
        }
        return count;
    }

};
