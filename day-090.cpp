class Solution {
public:
    vector<string> letterCombinations(string digits) {
        unordered_map<char,string>digittochar;
        vector<string>res;
        digittochar={
            {'2',"abc"},
           { '3',"def"},
            {'4',"ghi"},
           { '5',"jkl"},
           { '6',"mno"},
           { '7',"pqrs"},
           { '8',"tuv"},
           { '9',"wxyz"}
        };
        if(digits.empty())
        {
            return res;
        }
        
        
        recurs(digits,0,"",res,digittochar);
        return res;
    }
private:
    void recurs(const string& digit, int i,string subset,vector<string>&res, const unordered_map<char,string>& digittochar)
    {
        if(i>=digit.length())
        {
            res.push_back(subset);
            return;
        }
        for(char c:digittochar.at(digit[i]))
        {
            recurs(digit,i+1,subset+c,res,digittochar);
        }
    }
};
