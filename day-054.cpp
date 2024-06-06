class Solution {
public:
    int evalRPN(vector<string>& tokens) {
       stack<int>s1;
       int a=0,b=0;
       for(const string& c:tokens)
       {
        if(c=="-")
        {
            a=s1.top();
            s1.pop();
            b=s1.top();
            s1.pop();
            s1.push(b-a);
        }
        else if(c=="+")
        {
            a=s1.top();
            s1.pop();
            b=s1.top();
            s1.pop();

            s1.push(b+a);
        }
        else if(c=="*")
        {
            a=s1.top();
            s1.pop();
            b=s1.top();
            s1.pop();
            s1.push(a*b);
        }
        else if(c=="/")
        {
            a=s1.top();
            s1.pop();
            b=s1.top();
            s1.pop();
            s1.push(static_cast<int>(static_cast<double>(b)/a));
        }
        else
        {
            s1.push(stoi(c));
        }
       } 
       return s1.top();
    }
};
