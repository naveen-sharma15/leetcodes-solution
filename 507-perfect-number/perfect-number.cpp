class Solution {
public:
    bool checkPerfectNumber(int num) {
        int rem,sum=0;
     for (int i = 1; i <= (num - 1); i++)
    {
        rem = num % i;
	if (rem == 0)
        {
            sum = sum + i;
        }
    }
    if(sum==num)
    {
        return true;
    }
    else
    {
        return false;
    }
    }

};