class MinStack {
    private:
    stack<int>s1;
    stack<int>s2; //carries min val
public:
    MinStack() {
    }
    
    void push(int val) {
        s1.push(val);
        if(s2.empty())
        {
            val=min(val,val);
        }
        else
        {
           val=min(val,s2.top());
        }
        s2.push(val);
    }
    
    void pop() {
        s1.pop();
        s2.pop();
    }
    
    int top() {
        return s1.top();
    }
    
    int getMin() {
        return s2.top();
    }
};
