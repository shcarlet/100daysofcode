class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>numset(nums.begin(),nums.end());
        int longest=0;
        for(int n:numset)
        {
            if(numset.find(n-1)==numset.end())
            {
                int length=1;
                while(numset.find(n+length)!=numset.end())
                {
                    length+=1;
                }
            
            longest=max(length,longest);
            }
        }
        return longest;
    }
};
