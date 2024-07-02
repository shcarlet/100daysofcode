class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>maxheap;
        for(int s: stones)
        {
            maxheap.push(s);
        }
        maxheap.push(0);
        while(maxheap.size()>1)
        {
            int a=maxheap.top();
            maxheap.pop();
            int b=maxheap.top();
            maxheap.pop();
            if(a>b)
            {
                maxheap.push(a-b);
            }
        }
        return maxheap.top();
    }
};
