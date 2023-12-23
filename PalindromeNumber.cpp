class Solution {
public:
    bool isPalindrome(int x) {
        int temp,rem=0;
        uint sum=0;
        temp=x;
        if(x<0)
        {
            return false;
        }
        while(x!=0)
        {
            rem=(x%10);
            sum=(sum*10) + rem;
            x=(x/10);

        }
        cout<<sum;
        if(temp==sum)
        {
            return true;
        }
        else
        {
            return false;
        }

        
    }
};
