class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int>duplicate;
        for(int n:nums)
        {
           if(duplicate.count(n))
           {
            return n;
           }
        
        duplicate.insert(n);
    }
    return -1;
    }
};
