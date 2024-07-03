class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char,int>mapin;       //alphabets and its freq
        for(char t:tasks)
        {
            mapin[t]++;
        }
        priority_queue<int>maxheap;
        for(auto& i:mapin)
        {
            maxheap.push(i.second);   //freaquency of alphabets
        }
        int t=0; //TIME
        queue<pair<int,int>>q;
        while(!maxheap.empty() || !q.empty())
        {
            if(!q.empty() && t>=q.front().second)
            {
                maxheap.push(q.front().first);   //freq
                q.pop();
            }
            if(!maxheap.empty())
            {
                int freq=maxheap.top()-1;
                maxheap.pop();
                if(freq>0)
                {
                    q.push({freq,t+n+1});
                }
            }
            t++;
        }
        return t;
    }
};
