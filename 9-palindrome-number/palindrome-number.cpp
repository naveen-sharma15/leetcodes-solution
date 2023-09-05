class Solution {
public:
    bool isPalindrome(int x) {
        long rev=0;
        int temp=x;
        while(x>0)
        {
            long r=x%10;
            rev=rev*10+r;
            x=x/10;
        }
        if(rev==temp)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};