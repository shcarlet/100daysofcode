class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>maxheap;
        for(int n:nums)
        {
            maxheap.push(n);
        }
        while(k>1)
        {
            maxheap.pop();
            k--;
        }
        return maxheap.top();
    }
}
